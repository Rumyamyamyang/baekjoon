
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	int bundle{ 0 }, input{ 0 };
	std::vector<int> candy;
	int sum{ 0 };

	std::cin >> bundle;

	for (int i = 0; i < bundle; ++i)
	{
		std::cin >> input;
		sum += input;
		candy.push_back(input);
	}

	std::sort(candy.begin(), candy.end());

	for (int i = 0; i < bundle; ++i)
	{
		if (sum % 2 == 0)
		{
			break;
		}

		if (candy[i] % 2 == 1)
		{
			sum -= candy[i];
		}
	}

	std::cout << sum;
}