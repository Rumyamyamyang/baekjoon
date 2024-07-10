#include <iostream>

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int sum{ 0 };

	for (int i = 0, input_number; i < 5; ++i)
	{
		std::cin >> input_number;

		if (input_number < 40)
		{
			input_number = 40;
		}

		sum += input_number;
	}

	std::cout << sum / 5;
}