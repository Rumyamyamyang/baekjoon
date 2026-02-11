// 2026-02-11

#include <iostream>

int main()
{
	char input;
	std::string output = "Naver Whale";

	std::cin >> input;

	if (std::tolower(input) == 'n')
	{
		output = "Naver D2";
	}

	std::cout << output;

	return 0;
}