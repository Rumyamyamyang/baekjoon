#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	int wordNum{ 0 }, groupNum{ 0 };
	std::string input;
	std::vector<char> wordGroup;
	
	std::cin >> wordNum;
	char c{ 0 };
	bool isConsecutive{ false };

	// Word input
	for (int word = 0; word < wordNum; ++word)
	{
		std::cin >> input;
		
		// contain not consecutive alphabet
		wordGroup.push_back(input.front());

		for (int i = 1; i < input.size(); ++i)
		{
			c = input[i];

			if (input[i] == wordGroup.back())
			{
				continue;
			}
			else
			{
				wordGroup.push_back(c);
			}
		}

		// sort and check unique or not
		std::sort(wordGroup.begin(), wordGroup.end());

		for (int i = 0; i < wordGroup.size() - 1; ++i)
		{
			if (wordGroup[i] == wordGroup[i + 1])
			{
				isConsecutive = true;
				break;
			}
		}

		if (isConsecutive == true)
		{
			isConsecutive = false;
		}
		else
		{
			++groupNum;
		}

		wordGroup.clear();
	}

	std::cout << groupNum;

	return 0;
}