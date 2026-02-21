// 2026-02-19

#include <iostream>
#include <string>

int main()
{
	unsigned short testNum;
	std::string input, result;

	std::cin >> testNum;

	for (unsigned short test = 0; test < testNum; ++test)
	{
		std::cin >> input;
		result = input.front();	// start from the first text

		for (size_t i = 1; i < input.size(); ++i)
		{
			// If different, put inside the result
			if (result.back() != input[i])
			{
				result.push_back(input[i]);
			}
		}

		std::cout << result << '\n';
	}

	
	return 0;
}