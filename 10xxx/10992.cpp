#include <iostream>

int main()
{
	int input_number{ 0 };

	std::cin >> input_number;

	for (int row = 1; row <= input_number; ++row)
	{
		for (int start_blank = input_number - row; start_blank > 0; --start_blank)
		{
			std::cout << ' ';
		}

		if (row != input_number)
		{
			std::cout << '*';

			for (int middle_blank = 2 * (row - 1) - 1; middle_blank > 0; --middle_blank)
			{
				std::cout << ' ';
			}
		}

		if (row == input_number)
		{
			for (int final_star = 2 * row - 1; final_star > 0; --final_star)
			{
				std::cout << '*';
			}
		}
		else if (row != 1)
		{
			std::cout << '*';
		}

		if (row != input_number)
		{
			std::cout << '\n';
		}
	}
}

