#include <iostream>

int main()
{
	int MAX_value{ 0 };
	int MAX_index{ 0 };

	int input_value{ 0 };

	for (int row = 1; row <= 9; ++row)
	{
		std::cin >> input_value;

		if (input_value > MAX_value)
		{
			MAX_value = input_value;
			MAX_index = row;
		}
	}

	std::cout << MAX_value << '\n';
	std::cout << MAX_index;
}