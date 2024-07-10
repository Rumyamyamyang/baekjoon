#include <iostream>


int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int test_case{ 0 };
	std::string test{ "" };

	std::cin >> test_case;




	for (int i = 0; i < test_case; ++i)
	{
		int score{ 0 };
		int increase_score{ 1 };

		std::cin >> test;

		for (char OX : test)
		{
			if (OX == 'O')
			{
				score += increase_score;

				++increase_score;
			}
			else
			{
				increase_score = 1;
			}
		}

		std::cout << score << '\n';
	}
	
}