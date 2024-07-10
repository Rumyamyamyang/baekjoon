#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;

	for (char c : input)
	{
		// Difference 32
		if (c >= 'A' && c <= 'Z')
		{
			std::cout << static_cast<char>(c + 32);
		}
		else
		{
			std::cout << static_cast<char>(c - 32);
		}
	}

	return 0;
}