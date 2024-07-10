#include <iostream>
#include <string>

int main()
{
	int width{ 0 }, height{ 0 };
	std::cin >> width >> height;

	std::cout.precision(1);
	std::cout << std::fixed << static_cast<double>(width * height / 2.0);

	return 0;
}