// 2026-02-11

#include <iostream>

int main()
{
	unsigned int people, shares;

	while (std::cin >> people >> shares)
	{
		// people and judge share, needs to + 1
		std::cout << shares / (people + 1) << '\n';
	}

	return 0;
}