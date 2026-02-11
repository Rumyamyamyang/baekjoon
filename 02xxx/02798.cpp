
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	// input variable
	int cardAmount{ 0 }, targetNum{ 0 }, input{ 0 };
	std::vector<int> card;

	// output variable
	int sum{ 0 };

	std::cin >> cardAmount >> targetNum;

	for (int i = 0; i < cardAmount; ++i)
	{
		std::cin >> input;
		card.push_back(input);
	}

	for (int i = 0; i < card.size() - 2; ++i)
	{
		for (int j = 0; j < card.size() - 1; ++j)
		{
			for (int k = 0; k < card.size(); ++k)
			{
				if (card[i] + card[j] + card[k] <= targetNum && 
					card[i] + card[j] + card[k] > sum && i != j && j != k && i != k)
				{
					sum = card[i] + card[j] + card[k];

					if (sum == targetNum)
					{
						break;
					}
				}
			}
		}
	}

	std::cout << sum;

	return 0;
}