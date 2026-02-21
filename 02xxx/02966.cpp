// 2026-02-21

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	enum Users
	{
		Adrian,
		Bruno,
		Goran
	};

	int testNum;
	std::string answer;

	std::cin >> testNum;
	std::cin >> answer;

	// Adrian : ABC
	// Bruno : BA BC
	// Goran : CC AA BB
	std::string AdrianAnswer = "ABC";
	std::string BrunoAnswer = "BABC";
	std::string GoranAnswer = "CCAABB";

	std::vector<int> score(3, 0);

	// Check answer
	for (int i = 0; i < testNum; ++i)
	{
		char currentAnswer = answer[i];

		if (AdrianAnswer[i % 3] == currentAnswer)
		{
			++score[Users::Adrian];
		}

		if (BrunoAnswer[i % 4] == currentAnswer)
		{
			++score[Users::Bruno];
		}

		if (GoranAnswer[i % 6] == currentAnswer)
		{
			++score[Users::Goran];
		}
	}


	// Find max score
	int maxScore = *std::max_element(score.begin(), score.end());
	int maxIndex = static_cast<int>(std::max_element(score.begin(), score.end()) - score.begin());


	std::cout << maxScore << '\n';

	// Print max score person
	for (int i = maxIndex; i < 3; ++i)
	{
		if (score[i] == maxScore)
		{
			if (i == Users::Adrian)
			{
				std::cout << "Adrian" << '\n';
			}
			else if (i == Users::Bruno)
			{
				std::cout << "Bruno" << '\n';
			}
			else if (i == Users::Goran)
			{
				std::cout << "Goran" << '\n';
			}
		}
	}

	return 0;
}