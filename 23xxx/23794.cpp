// 2026-03-10

#include <iostream>

static void PrintHorizontal(int amount);

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int blank;

	std::cin >> blank;

	PrintHorizontal(blank);

	for (int row = 0; row < blank; ++row)
	{
		std::cout << '@';

		for (int column = 0; column < blank; ++column)
		{
			std::cout << ' ';
		}

		std::cout << '@' << '\n';
	}

	PrintHorizontal(blank);

	return 0;
}

static void PrintHorizontal(int amount)
{
	for (int i = 0; i < amount + 2; ++i)
	{
		std::cout << '@';
	}

	std::cout << '\n';
}