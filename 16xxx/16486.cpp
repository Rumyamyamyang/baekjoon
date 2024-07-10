#include <iostream>
#include <string>

int main()
{
	constexpr double PI = 3.141592;

	int width{ 0 }, radius{ 0 };
	std::cin >> width >> radius;


	std::cout.precision(7);
	std::cout << 2 * width + 2 * radius * PI;

	return 0;
}