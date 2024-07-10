#include <iostream>
#include <string>


int main()
{
	// fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int amount{ 0 };

	std::cin >> amount;

	for (int reverse_row = amount, row = 1; reverse_row > 0; --reverse_row, ++row)
	{
		for (int space = reverse_row; space > 1; --space)
		{
			std::cout << " ";
		}

		for (int star = 0; star < row * 2 - 1; ++star)
		{
			std::cout << "*";
		}
		
		std::cout << '\n';
	}

	return 0;
}