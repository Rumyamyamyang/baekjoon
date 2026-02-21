// 2026-02-21

#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	/*
	Game Rule (Only needed for the problem)

	1. Each player calling odds or evens
	2. Showing number of fingers with one hand. (1~5)
	3. Add the number and check odd or even. Someone who said correct answer wins.
	*/



	
	int gameAmount, fingers;

	while (true)
	{
		std::cin >> gameAmount;

		// End of loop when input is 0
		if (gameAmount == 0)
		{
			break;
		}

		// Get the fingers
		std::vector<int> JohnFingers;
		std::vector<int> MaryFingers;

		for (int i = 0; i < gameAmount; ++i)
		{
			std::cin >> fingers;

			JohnFingers.push_back(fingers);
		}

		for (int i = 0; i < gameAmount; ++i)
		{
			std::cin >> fingers;

			MaryFingers.push_back(fingers);
		}

		// Add two fingers and check Mary wins
		// Order could be different

		// John : odd
		// Mary : even

		// Find Odd fingers and delete the used number
		for (int i = 0; i < gameAmount; ++i)
		{
			for (int j = 0; j < MaryFingers.size(); ++j)
			{
				if ((JohnFingers[i] + MaryFingers[j]) % 2 == 1)
				{
					MaryFingers.erase(MaryFingers.begin() + j);
					break;
				}
			}
		}

		std::cout << MaryFingers.size() << '\n';
	}

	return 0;
}