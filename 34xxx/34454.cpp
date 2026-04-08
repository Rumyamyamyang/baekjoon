// 2026-04-07

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int myPlaceNum, train, carHolds;

	std::cin >> myPlaceNum;
	std::cin >> train;
	std::cin >> carHolds;

	if (myPlaceNum <= carHolds * train)
	{
		std::cout << "yes";
	}
	else
	{
		std::cout << "no";
	}

	return 0;
}