
#include <iostream>
#include <string>

int main()
{
	std::string input;
	int count{ 0 };

	while (std::getline(std::cin, input))
	{
		if (input == "gum gum for jay jay")
		{
			++count;
		}
	}

	std::cout << count;

	return 0;
}