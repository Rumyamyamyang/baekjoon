#include <iostream>
#include <string>


int main()
{
	// fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int amount{ 0 };

	std::cin >> amount;

	for (int row = amount; row > 0; --row)
	{
		for (int column = 0; column < row; ++column)
		{
			std::cout << "*";
		}

		if (row == 1)
			break;

		std::cout << '\n';

	}

	return 0;
}