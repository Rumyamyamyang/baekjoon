#include <iostream>
#include <string>

int main()
{
	int inputAmount{ 0 }, shuValue{ 0 };
	std::string input;
	
	std::cin >> inputAmount;

	for (int i = 0; i < inputAmount; ++i)
	{
		std::cin >> input;

		// Can change to input.front == 'P'
		if (input == "Poblano")
		{
			shuValue += 1500;
		}
		else if (input == "Mirasol")
		{
			shuValue += 6000;
		}
		else if (input == "Serrano")
		{
			shuValue += 15500;
		}
		else if (input == "Cayenne")
		{
			shuValue += 40000;
		}
		else if (input == "Thai")
		{
			shuValue += 75000;
		}
		else if (input == "Habanero")
		{
			shuValue += 125000;
		}
	}

	std::cout << shuValue;

	return 0;
}