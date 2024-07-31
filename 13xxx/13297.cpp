// https://x.com/rumya_study/status/1818642858410434720

#include <iostream>
#include <string>
#include <vector>

int main()
{
	int inputAmount{ 0 };
	std::string input;
	std::vector<int> digits;

	std::cin >> inputAmount;

	for (int i = 0; i < inputAmount; ++i)
	{
		std::cin >> input;

		digits.push_back(static_cast<int>(input.size()));
	}

	for (int i : digits)
	{
		std::cout << i << '\n';
	}

	return 0;
}