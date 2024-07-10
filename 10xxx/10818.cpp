#include <iostream>


int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int input_amount{ 0 };

	std::cin >> input_amount;



	int min_value{ 0 };
	int max_value{ 0 };

	for (int i = 0, input_value; i < input_amount; ++i)
	{
		std::cin >> input_value;

		if (input_value < min_value || i == 0)
		{
			min_value = input_value;
		}
		if (input_value > max_value || i == 0)
		{
			max_value = input_value;
		}
	}

	std::cout << min_value << " " << max_value;
}