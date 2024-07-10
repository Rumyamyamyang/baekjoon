#include <iostream>

int main()
{
	long long a{ 0 }, b{ 0 };
	std::cin >> a >> b;

	std::cout << (a + b) * (a - b);

	return 0;
}