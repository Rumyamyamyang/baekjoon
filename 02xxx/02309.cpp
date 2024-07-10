#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> height;
	int input{ 0 };
	int fakeSum{ 0 };

	for (int i = 0; i < 9; ++i)
	{
		std::cin >> input;
		height.push_back(input);
		fakeSum += input;
	}

	fakeSum -= 100;

	std::sort(height.begin(), height.end());

	int checkHeight{ 0 };
	bool isFound{ false };

	// 1. fakeSum - i (if <0, early break)
	// 2. find 1. in the sort (if not find, go to next step)
	for (int i = 0; i < height.size(); ++i)
	{
		checkHeight = fakeSum - height[i];

		for (int j = i; j < height.size(); ++j)
		{
			if (height[j] > checkHeight)
			{
				break;
			}
			else if (height[j] == checkHeight)
			{
				height.erase(height.begin() + i);
				height.erase(height.begin() + j - 1);

				isFound = true;
				break;
			}
		}

		if (isFound == true)
		{
			break;
		}
	}

	for (int i : height)
	{
		std::cout << i << '\n';
	}


	return 0;
	
}