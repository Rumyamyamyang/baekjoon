
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

int main()
{
	int sentenceAmount{ 0 }, output{ 0 };
	std::string input;
	std::vector<std::string> emoticon{ "01" , "OI" };
	bool isExist{ false };

	std::cin >> sentenceAmount;

	for (int i = 0; i < sentenceAmount; ++i)
	{
		std::cin >> input;

		// find including string
		for (int j = 0; j < emoticon.size(); ++j)
		{
			while (true)
			{
				size_t index = input.find(emoticon[j]);

				if (index == std::string::npos || isExist == true)
				{
					break;
				}

				input.replace(index, emoticon[j].size(), "!");
				isExist = true;
			}
		}

		if (isExist == true)
		{
			++output;
			isExist = false;
		}
	}

	std::cout << output;

	return 0;
}