// https://x.com/rumya_study/status/1817918345209086062

#include <iostream>
#include <string>
#include <algorithm>

int main()
{
	int input{ 0 }, output{ 0 }, index{ 0 };
	constexpr int failToFind{ -1 }, successToFind{ -2 };
	std::string target;
	std::string::iterator iter;

	std::cin >> input;

	for (int i = 2023; i <= input; ++i)
	{
		// Reset
		target = std::to_string(i);
		index = 0;

		// find 2023
		while (index >= 0)
		{
			switch (index)
			{
			// 2
			case 0:
			{
				iter = std::find(std::begin(target), std::end(target), '2');
			}
			break;

			// 20
			case 1:
			{
				iter = std::find(iter, std::end(target), '0');
			}
			break;

			// 202
			case 2:
			{
				iter = std::find(iter, std::end(target), '2');
			}
			break;

			// 2023
			case 3:
			{
				iter = std::find(iter, std::end(target), '3');
				index = successToFind;
			}
			break;
			}

			// DNE
			if (iter == std::end(target))
			{
				index = failToFind;
			}
			// End to Find
			else if (index == successToFind)
			{
				++output;
			}
			// Need to Find more
			else
			{
				++index;
			}
		}
	}

	std::cout << output;
}