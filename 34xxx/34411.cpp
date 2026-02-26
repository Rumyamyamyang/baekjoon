// 2026-02-26

#include <iostream>


int main()
{
	int rock, paintCost, budget;

	std::cin >> rock;
	std::cin >> paintCost;
	std::cin >> budget;	// We only need estimate money, this won't be used.

	std::cout << rock * paintCost;

	return 0;
}