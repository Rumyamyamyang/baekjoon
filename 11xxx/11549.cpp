// 2026-04-08

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int target;
	int input;
	int correctAmount = 0;

	std::cin >> target;

	for (int i = 0; i < 5; ++i)
	{
		std::cin >> input;

		if (target == input)
		{
			++correctAmount;
		}
	}

	std::cout << correctAmount;

	return 0;
}