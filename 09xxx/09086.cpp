#include <iostream>
#include <string>
#include <vector>

int main()
{
	int testCase{ 0 };
	std::string input, value;
	std::vector<std::string> wordFirstLast;

	std::cin >> testCase;

	for (int i = 0; i < testCase; ++i)
	{
		std::cin >> input;

		value = input.front(); 
		value += input.back();
		wordFirstLast.push_back(value);
	}

	for (std::string output : wordFirstLast)
	{
		std::cout << output << '\n';
	}

	return 0;
}