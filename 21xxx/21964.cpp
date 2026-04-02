// 2026-03-25

#include <iostream>
#include <string>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int inputSize;
	std::string input;

	std::cin >> inputSize;
	std::cin >> input;

	int startPart = inputSize - 5;

	for (int i = 0; i < 5; ++i)
	{
		std::cout << input[startPart + i];
	}

	return 0;
}