// 2026-04-07

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int count;

	std::cin >> count;

	for (int i = 0; i < count; ++i)
	{
		std::cout << "I love DGU" << '\n';
	}


	return 0;
}