#include <iostream>

int main()
{
	int input{0}, lostMoney{0};

	while (std::cin >> input)
	{
		// EOF
		if (input == -1)
		{
			break;
		}
		
		lostMoney += input;
	}

	std::cout << lostMoney;

	return 0;
}