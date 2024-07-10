#include <iostream>
#include <string>


int main()
{
	// fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int input{ 0 };

	std::cin >> input;

	for (int row = 1, space_row = input - 1; row <= input; ++row, --space_row)
	{
		/*
		* 1st row has 1 star
		* 2nd row has 2 star
		* ...
		*/ 
		for (int left_star = 1; left_star <= row; ++left_star)
		{
			std::cout << "*";
		}

		/*
		* space_row has input - 1
		* 
		* If input is 4
		* In 1st row, it has 3 whitespaces (which are (4 - 1) * 2)
		*/
		for (int space = space_row * 2; space > 0; --space)
		{
			std::cout << " ";
		}

		// Same as left star
		for (int right_star = 1; right_star <= row; ++right_star)
		{
			std::cout << "*";
		}

		std::cout << '\n';
	}

	for (int row = input - 1, space_row = 1; row >= 0; --row, ++space_row)
	{
		for (int left_star = 1; left_star <= row; ++left_star)
		{
			std::cout << "*";
		}

		for (int space = space_row * 2; space > 0; --space)
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