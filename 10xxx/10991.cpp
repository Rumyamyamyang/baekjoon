#include <iostream>

int main()
{
	int input{ 0 };

	std::cin >> input;

	for (int row = 1; row <= input; row++)
	{
		for (int blank = input - row; blank > 0; --blank)
		{
			std::cout << ' ';
		}

		for (int star = row; star > 0; --star)
		{
			if (star == row)
			{
				std::cout << '*';
				continue;
			}
			std::cout << ' ';
			std::cout << '*';
		}

		if (row == input)
		{
			break;
		}
		std::cout << '\n';
	}
}