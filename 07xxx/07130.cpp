// 2026-03-11

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int milkHappiness, honeyHappiness;
	int fieldAmount;
	int cowMax, beeMax;
	int resultHappiness{ 0 };

	std::cin >> milkHappiness >> honeyHappiness;
	std::cin >> fieldAmount;
	
	for (int i = 0; i < fieldAmount; ++i)
	{
		std::cin >> cowMax >> beeMax;

		if (cowMax * milkHappiness > beeMax * honeyHappiness)
		{
			resultHappiness += cowMax * milkHappiness;
		}
		else
		{
			resultHappiness += beeMax * honeyHappiness;
		}
	}

	std::cout << resultHappiness;

	return 0;
}