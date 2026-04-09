// 2026-04-08

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	constexpr int materialCost = 900 + 60 + 600 + 170 + 160 + 110;
	int budget;

	std::cin >> budget;

	std::cout << budget / materialCost;

	return 0;
}