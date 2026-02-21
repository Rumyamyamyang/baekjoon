// 2026-02-19

#include <iostream>
#include <map>
#include <math.h>

int main()
{
	int testNum, input;

	std::cin >> testNum;

	for (int test = 0; test < testNum; ++test)
	{
		std::map<int, int> primeFactorization;
		int result = 1;

		std::cin >> input;

		// Do primefactorization
		while (input > 1)
		{
			for (int i = 2; i <= static_cast<int>(std::floor(sqrt(input))); ++i)
			{
				if (result % i == 0)
				{
					// store i value inside the primeFactorization. if exist, ++value
					result /= i;
				}
			}
		}


		for (std::pair<int, int> powerCheck : primeFactorization)
		{
			result *= powerCheck.second;
		}

		std::cout << testNum << ' ' << result;
	}

	return 0;
}