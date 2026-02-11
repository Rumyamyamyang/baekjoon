#include <iostream>
#include <cmath>

int main()
{
	int input{ 0 };

	std::cin >> input;

	std::cout << "The largest square has side length " << static_cast<int>(sqrt(input)) << '.';
}