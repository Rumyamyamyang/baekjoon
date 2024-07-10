#include <iostream>
#include <string>

int main()
{
	int num{ 0 };
	std::string input;

	std::cin >> num;

	for (int i = 0; i < num; ++i)
	{
		std::cin >> input;

		if (input == "anj")
		{
			std::cout << "뭐야;";
			return 0;
		}
	}

	std::cout << "뭐야?";
	return 0;
}