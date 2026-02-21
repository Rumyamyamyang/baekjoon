// 2026-02-19

#include <iostream>

int main()
{
	unsigned short factorial;
	unsigned long long result = 1;

	std::cin >> factorial;

	for (unsigned short i = factorial; i > 0; --i)
	{
		result *= i;
	}

	std::cout << result;

	return 0;
}