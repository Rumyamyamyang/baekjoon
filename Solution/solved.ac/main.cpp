#include <iostream>
#include <vector>
#include <string>

int main()
{
	constexpr int inputAmount{ 3 };
	std::string input;

	int num{ 0 };

	for (int i = 0; i < inputAmount; ++i)
	{
		std::cin >> input;

		// Check first number string
		try
		{
			if (num == 0)
			{
				num = std::stoi(input) + inputAmount - i;
			}
		}
		catch (std::invalid_argument)
		{
			continue;
		}
	}

	std::cout << num;
}