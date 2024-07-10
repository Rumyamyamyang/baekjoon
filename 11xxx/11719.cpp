#include <iostream>
#include <string>


int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string input_text;

	while (std::getline(std::cin, input_text))
	{
		std::cout << input_text << '\n';
	}

	return 0;
}