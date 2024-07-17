// https://x.com/rumya_study/status/1813494062395412869

#include <algorithm>
#include <iostream>
#include <array>

int main()
{
	constexpr int amount = 3;
	constexpr int mamaIndex = 1;
	int inputWeight{ 0 };
	std::array<int, amount> bowlWeight{ 0 };

	// Ascending order
	for (int i = 0; i < amount; ++i)
	{
		std::cin >> inputWeight;
		bowlWeight[i] = inputWeight;
	}

	std::sort(bowlWeight.begin(), bowlWeight.end());

	std::cout << bowlWeight[mamaIndex];
}