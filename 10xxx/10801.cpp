// 2026-03-11

#include <iostream>
#include <vector>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	std::vector<int> Acards;
	int card;
	int Ascore = 0;


	for (int round = 0; round < 10; ++round)
	{
		std::cin >> card;
		Acards.push_back(card);
	}

	for (int round = 0; round < 10; ++round)
	{
		std::cin >> card;

		if (Acards[round] > card)
		{
			++Ascore;
		}
		else if (Acards[round] < card)
		{
			--Ascore;
		}
	}

	if (Ascore > 0)
	{
		std::cout << 'A';
	}
	else if (Ascore == 0)
	{
		std::cout << 'D';
	}
	// Could be else, but emphasize condition
	else if (Ascore < 0)
	{
		std::cout << 'B';
	}
	

	return 0;
}