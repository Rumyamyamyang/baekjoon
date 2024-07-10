#include <iostream>

int main()
{
	int factorial{ 0 }, value{ 1 };

	std::cin >> factorial;

	for (int i = 2; i <= factorial; ++i)
	{
		value *= i;
	}

	std::cout << value;

	return 0;
}