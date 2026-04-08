// 2026-04-08

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int num;
	std::vector<int> numbers;

	for (int i = 0; i < 3; ++i)
	{
		std::cin >> num;

		numbers.push_back(num);
	}

	std::sort(numbers.begin(), numbers.end());

	std::cout << numbers[1];
	


	return 0;
}