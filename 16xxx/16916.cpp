#include <iostream>
#include <string>
#include <cstring>

int main()
{
	std::string base, part;

	std::cin >> base;
	std::cin >> part;

	if (strstr(base.c_str(), part.c_str()) != nullptr)
	{
		std::cout << '1';
	}
	else
	{
		std::cout << '0';
	}

	return 0;
}