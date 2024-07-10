#include <iostream>
#include <vector>

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int vector_size{ 0 };
	int base_number{ 0 };

	std::cin >> vector_size >> base_number;

	std::vector<int> number_vector(vector_size);

	for (int i = 0, input_value; i < vector_size; ++i)
	{
		std::cin >> input_value;
		number_vector[i] = input_value;
	}

	for (int number : number_vector)
	{
		if (number < base_number)
		{
			std::cout << number << " ";
		}
	}
}