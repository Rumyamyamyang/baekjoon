// 2026-03-25

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int input = 0;
	int firstResult = 1;
	int secondResult = 1;

	for (int first = 0; first < 2; ++first)
	{
		std::cin >> input;

		firstResult *= input;
	}

	for (int second = 0; second < 3; ++second)
	{
		std::cin >> input;

		secondResult *= input;
	}


	std::cout << firstResult - secondResult;

	return 0;
}