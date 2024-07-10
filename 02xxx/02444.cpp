#include <iostream>

int main()
{
	int input{ 0 };
	std::cin >> input;

	// First part
	for (int i = 0; i < input; ++i)
	{
		for (int space = 0; space < input - 1 - i; ++space)
		{
			std::cout << ' ';
		}

		for (int star = 0; star < 2 * i + 1; ++star)
		{
			std::cout << '*';
		}

		std::cout << '\n';
	}

	// Second part
	for (int i = 0; i < input - 1; ++i)
	{
		for (int space = 0; space < i + 1; ++space)
		{
			std::cout << ' ';
		}

		for (int star = 0; star < 2 * (input - i - 1) - 1; ++star)
		{
			std::cout << '*';
		}

		std::cout << '\n';
	}

	return 0;
}