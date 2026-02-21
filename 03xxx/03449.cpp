// 2026-02-19

#include <iostream>
#include <string>

int main()
{
	unsigned short testNum;

	std::cin >> testNum;
    
	std::string input;
	unsigned long long a, b;
	int bitOnCount;

	for (int test = 0; test < testNum; ++test)
	{
		bitOnCount = 0;

		// Get input inside the std::string -> stoi to put with binary base number
		std::cin >> input;
		a = std::stoll(input, nullptr, 2);

		std::cin >> input;
		b = std::stoll(input, nullptr, 2);

		a ^= b;	// If different, bit will be 1

		// Fast bit count
		while (a > 0)
		{
			++bitOnCount;

			a &= (a - 1);
		}

		std::cout << "Hamming distance is " << bitOnCount << '.' << '\n';
	}
	
	return 0;
}