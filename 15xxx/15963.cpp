// 2026-03-10

#include <iostream>

int main()
{
	// @ 2 : type error, need 10 digit
	unsigned long long need, battery;

	std::cin >> need >> battery;

	// @ 1 : logic error, number can be different (I thought only 1, 0 input)
	if (need == battery)
	{
		std::cout << 1;
	}
	else
	{
		std::cout << 0;
	}

	return 0;
}