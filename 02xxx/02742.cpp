#include <iostream>

int main()
{
	int N;

	std::cin >> N;

	while (N >= 1)
	{
		std::cout << N << '\n';
		N--;
	}

	std::cin.get();
}