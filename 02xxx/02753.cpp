#include <iostream>

int main()
{
	int year;
	std::cin >> year;

	// 4의 배수, 100의 배수가 아닐때
	if (year % 4 == 0 && !(year % 100 == 0))
	{
		std::cout << 1 << std::endl;
	}
	// 400의 배수일때
	else if (year % 400 == 0)
	{
		std::cout << 1 << std::endl;
	}
	else
	{
		std::cout << 0 << std::endl;
	}

	std::cin.get();
}