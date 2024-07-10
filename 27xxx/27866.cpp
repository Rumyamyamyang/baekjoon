#include <iostream>
#include <string>

int main()
{
	std::string input;
	int index{ 0 };

	std::cin >> input;
	std::cin >> index;

	std::cout << input[index - 1];

	return 0;
}