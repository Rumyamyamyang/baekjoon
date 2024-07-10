#include <iostream>

int main()
{
	// Reading fail : return 9

	int input;

	for (int i = 0; i < 8; ++i)
	{
		std::cin >> input;

		if (input == 9)
		{
			std::cout << "F";
			return 0;
		}
	}

	std::cout << "S";
	return 0;
}