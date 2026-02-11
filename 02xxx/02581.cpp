
#include <iostream>

int main()
{
	int start{ 0 }, end{ 0 };
	long long min{ -1 }, sum{ 0 };

	std::cin >> start >> end;

	// 2 is prime number
	if (end != 1 && start <= 2)
	{
		min = 2;
		start = 3;
		sum += 2;
	}

	for (int i = start; i <= end; ++i)
	{
		for (int j = 2; j <= i / 2 + 1; ++j)
		{
			if (i % j == 0)
			{
				break;
			}

			if (j == i / 2 + 1)
			{
				if (min == -1)
				{
					min = i;
				}

				sum += i;
			}
		}
	}

	if (min == -1)
	{
		std::cout << min;
	}
	else
	{
		std::cout << sum << '\n' << min;
	}
	 
	return 0;
}