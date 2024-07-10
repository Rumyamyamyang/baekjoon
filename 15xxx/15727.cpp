#include <iostream>

int main()
{
	int input{ 0 };
	constexpr int maxMove{ 5 };


	std::cin >> input;

	if (input % maxMove == 0)
	{
		std::cout << input / maxMove;
	}
	else
	{
		std::cout << input / maxMove + 1;
	}
}