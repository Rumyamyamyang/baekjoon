#include <iostream>
#include <string>


int main()
{
	// fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int input{ 0 };

	std::cin >> input;

	for (int space_row = input, row = 0; space_row > 0; --space_row, ++row)
	{
		if (space_row == input)
			continue;

		for (int space = space_row; space > 0; --space)
		{
			std::cout << " ";
		}

		for (int right_star = 1; right_star <= row; ++right_star)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}

	for (int row = input, space_row = 0; row >= 0; --row, ++space_row)
	{
		for (int space = space_row; space > 0; --space)
		{
			std::cout << " ";
		}

		for (int right_star = 1; right_star <= row; ++right_star)
		{
			std::cout << "*";
		}
		std::cout << '\n';
	}

	return 0;
}