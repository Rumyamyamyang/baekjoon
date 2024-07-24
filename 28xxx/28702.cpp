// https://x.com/rumya_study/status/1815984339169276369

#include <iostream>
#include <vector>
#include <string>

int main()
{
	constexpr int inputAmount{ 3 };
	std::string string;

	int num{ 0 };

	for (int i = 0; i < inputAmount; ++i)
	{
		std::cin >> string;

		// Check first number string
		try
		{
			if (num == 0)
			{
				num = std::stoi(string) + inputAmount - i;
			}
		}
		catch (std::invalid_argument)
		{
			continue;
		}
	}

	if (num % 3 == 0 && num % 5 == 0)
	{
		string = "FizzBuzz";
	}
	else if (num % 3 == 0)
	{
		string = "Fizz";
	}
	else if (num % 5 == 0)
	{
		string = "Buzz";
	}
	else
	{
		string = std::to_string(num);
	}

	std::cout << string;
}