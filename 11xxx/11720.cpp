#include <iostream>
#include <string>

int main()
{
	std::string all_number;
	int sum_number{ 0 };

	std::cin >> all_number >> all_number;

	for (int number_ascii : all_number)
	{
		number_ascii -= '0';

		sum_number += number_ascii;
	}

	std::cout << sum_number;
}