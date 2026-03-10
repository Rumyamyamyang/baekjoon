// 2026-03-10

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------


	unsigned long long N;
	int testCase;

	// N 
	// K = N^2

	// @ 2 : Didn't used testCase
	std::cin >> testCase;
	

	// @ 1 : make precision to be fixed and 0.

	std::cout << std::fixed;
	std::cout.precision(0);

	for (int i = 0; i < testCase; ++i)
	{
		std::cin >> N;
		std::cout << N * N << '\n';
	}


	return 0;
}