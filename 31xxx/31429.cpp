// 2026-04-08

#include <iostream>
#include <array>

class Score
{
public:
	Score(int solved, int panalty) : solvedProblem(solved), panalty(panalty)
	{}

	void PrintInfo() const
	{
		std::cout << solvedProblem << ' ' << panalty;
	}


private:
	int solvedProblem;
	int panalty;
};

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int ranking;
	std::array<Score, 11> scoreboard
	{
		Score{ 12, 1600 }, Score{ 11, 894 }, Score{ 11, 1327 },
		Score{ 10, 1311 }, Score{ 9, 1004 }, Score{ 9, 1178 },
		Score{ 9, 1357 }, Score{ 8, 837 }, Score{ 7, 1055 },
		Score{ 6, 556 }, Score{ 6, 773 }
	};

	std::cin >> ranking;

	scoreboard[ranking - 1].PrintInfo();

	return 0;
}