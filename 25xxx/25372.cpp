// 2026-02-19

#include <iostream>
#include <string>

int main()
{
	unsigned short passwordAmount;
	std::string password;

	std::cin >> passwordAmount;
	

	for (unsigned short i = 0; i < passwordAmount; ++i)
	{
		std::cin >> password;

		if (password.size() >= 6 && password.size() <= 9)
		{
			std::cout << "yes" << '\n';
		}
		else
		{
			std::cout << "no" << '\n';
		}
	}

	return 0;
}