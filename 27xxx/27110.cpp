// https://x.com/rumya_study/status/1813723636358152599

#include <iostream>

int main()
{
	int eachChicken{ 0 };
	int input{ 0 };
	int output{ 0 };

	std::cin >> eachChicken;

	for (int i = 0; i < 3; ++i)
	{
		std::cin >> input;

		if (input > eachChicken)
		{
			output += eachChicken;
		}
		else
		{
			output += input;
		}
	}

	std::cout << output;
}