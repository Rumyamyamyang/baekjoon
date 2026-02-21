// 2026-02-21

#include <iostream>
#include <map>
#include <math.h>

int main()
{
	int testNum, input;

	std::cin >> testNum;

	for (int test = 0; test < testNum; ++test)
	{
		std::map<int, int> primeFactorization;	// key : base, temp : power

		std::cin >> input;
		int result = 1;
		int temp = input;

		// Do primefactorization
		// If the input is 1, it has only itself, so skip and output 1
		while (temp > 1)
		{
			for (int i = 2; i <= temp; ++i)
			{
				if (temp % i == 0)
				{
					// store i temp inside the primeFactorization. 
					if (auto keyIsExist = primeFactorization.find(i); keyIsExist == primeFactorization.end())
					{
						primeFactorization.insert({ i, 1 });
					}
					else
					{
						++primeFactorization[i];	// Increase power of the key which is base
					}

					temp /= i;

					break;
				}
			}

			// It is prime, so treat as 2
			if (temp == input)
			{
				result = 2;
				
				break;
			}
		}

		// see the power of each key and multiply by temp + 1
		// If it is prime, std::map doesn't have any data, so this will be skip
		for (std::pair<int, int> powerCheck : primeFactorization)
		{
			result *= (powerCheck.second + 1);
		}

		std::cout << input << ' ' << result << '\n';
	}

	return 0;
}