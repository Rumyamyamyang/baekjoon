
// Optimize version : https://www.acmicpc.net/source/80862928 
// This code is slow then this algorithm, but it fits on other string
// (This code treat start alphabet is not included in target string)

#include <iostream>
#include <algorithm>


int main()
{
	std::string input, checkString;
	int stringNum{ 0 }, maxLoop{ 0 }, loop{ 0 };

	std::cin >> stringNum;

	for (int i = 0; i < stringNum; ++i)
	{
		std::cin >> input;

		// Check string
		for (char c : input)
		{
			// update checkString
			if (c == 'f' || c == 'w')
			{
				checkString = c;
			}
			else if (checkString.empty() == false)
			{
				checkString += c;
			}

			// Check for
			if (checkString.size() == 3)
			{
				if (checkString.front() == 'w')
				{
					continue;
				}
				else if (checkString == "for")
				{
					++loop;
				}
				checkString = "";
			}
			// Check while
			else if (checkString.size() == 5)
			{
				if (checkString == "while")
				{
					++loop;
				}
				checkString = "";
			}
		}

		if (loop > maxLoop)
		{
			maxLoop = loop;
		}

		loop = 0;
		checkString = "";
	}

	std::cout << maxLoop;
}