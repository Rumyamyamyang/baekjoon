#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	// Fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	// Input
	int input_amount{ 0 };

	std::cin >> input_amount;

	std::vector<int> number_vector(input_amount);

	for (int i = 0; i < number_vector.size(); ++i)
	{
		std::cin >> input_amount;

		number_vector[i] = input_amount;
	}

	std::sort(number_vector.begin(), number_vector.end());

	{
		for (int i = 0, unique_value = 0; i < number_vector.size(); ++i)
		{
			if (unique_value != number_vector[i] || i == 0)
			{
				std::cout << number_vector[i] << '\n';
				unique_value = number_vector[i];
			}
		}
	}
}