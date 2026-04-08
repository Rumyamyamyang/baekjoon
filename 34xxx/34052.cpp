// 2026-04-08

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int takenSecond;
	int totalSecond = 0;
	
	constexpr int finalSecond = 300;
	constexpr int passSecond = 1800;

	for (int i = 0; i < 4; ++i)
	{
		std::cin >> takenSecond;

		totalSecond += takenSecond;
	}

	if (totalSecond + finalSecond <= passSecond)
	{
		std::cout << "Yes";
	}
	else
	{
		std::cout << "No";
	}


	return 0;
}