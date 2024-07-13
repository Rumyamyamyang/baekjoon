// https://x.com/rumya_study/status/1812123406864957634

#include <iostream>

int main()
{
	int num{ 0 }, input{ 0 };
	int primeNum{ 0 };
	bool isNormal{ false };

	std::cin >> num;

	for (int i = 0; i < num; ++i)
	{
		std::cin >> input;

		for (int j = 2; j <= input / 2; ++j)
		{
			if (input % j == 0)
			{
				isNormal = true;
				break;
			}
		}

		if (isNormal || input == 1)
		{
			isNormal = false;
			continue;
		}

		++primeNum;
	}

	std::cout << primeNum;
}