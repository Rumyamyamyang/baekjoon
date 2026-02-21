// 2026-02-19

#include <iostream>
#include <math.h>

int main()
{
	unsigned short flame;
	
	// splits 2 times, 1 -> split -> split^2
	std::cin >> flame;

	std::cout << static_cast<int>(std::floor(std::sqrt(flame)));


	return 0;
}