#include <iostream>

int main()
{
	long long N, M;

	std::cin >> N >> M;

	std::cout << llabs(N - M) << '\n';

	return 0;
}