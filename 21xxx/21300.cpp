
#include <iostream>

int main()
{
	constexpr int inputAmount{ 6 }, deposit{ 5 };
	int sum{ 0 }, input{ 0 };

	for (int i = 0; i < inputAmount; ++i)
	{
		std::cin >> input;
		sum += input;
	}

	sum *= deposit;

	std::cout << sum;
}