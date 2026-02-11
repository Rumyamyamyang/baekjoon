
#include <iostream>

int main()
{
	int numerator{ 0 }, denominator{ 0 };

	std::cin >> numerator >> denominator;

	std::cout << denominator - numerator << ' ' << denominator;

	return 0;
}