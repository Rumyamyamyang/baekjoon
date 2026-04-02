// 2026-04-03

#include <iostream>
#include <queue>

// @ 1 : Time exceeded (Maybe because of std::vector use. std::vector arrange index without deleting last index)
int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	// Initialize deck
	int max = 0;
	int temp = 0;
	std::queue<int> deck;

	std::cin >> max;

	for (int i = 1; i <= max; ++i)
	{
		deck.push(i);
	}


	// Do a work until size is 1.
	while (deck.size() != 1)
	{
		// Discard first
		deck.pop();

		// Discard and put it last.
		temp = deck.front();
		deck.pop();

		deck.push(temp);
	}

	std::cout << deck.front();

	return 0;
}