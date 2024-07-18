// https://x.com/rumya_study/status/1813802666923090343

#include <iostream>
#include <cmath>

int main()
{
	int input{ 0 };

	std::cin >> input;

	std::cout << "The largest square has side length " << static_cast<int>(sqrt(input)) << '.';
}