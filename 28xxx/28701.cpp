
#include <iostream>
#include <cmath>

int main()
{
	int targetNum{ 0 }, sum{ 0 }, pow3sum{ 0 };

	std::cin >> targetNum;

	for (int i = 1; i <= targetNum; ++i)
	{
		sum += i;
		pow3sum += static_cast<int>(std::pow(i, 3));
	}

	std::cout << sum << '\n';
	std::cout << static_cast<int>(std::pow(sum, 2)) << '\n';
	std::cout << pow3sum;

	return 0;
}