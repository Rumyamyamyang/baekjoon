#include <iostream>
#include <string>

int main()
{
	std::string input;

	std::cin >> input;
	int size = static_cast<int>(input.size());

	for (int i = 0; i < size / 2; ++i)
	{
		if (input[i] != input[size - 1 - i])
		{
			std::cout << '0';
			return 0;
		}
	}

	std::cout << '1';
	return 0;
}