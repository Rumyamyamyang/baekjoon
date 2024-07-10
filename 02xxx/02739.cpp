#include <iostream>

int main()
{
	int N;

	std::cin >> N;

	for (int i = 1; i <= 9; i++)
	{
		int Multiplied = N * i;
		std::cout << N << " * " << i << " = " << Multiplied << '\n';
	}
}