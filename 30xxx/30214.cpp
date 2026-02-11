// 2026-02-11

#include <iostream>

int main()
{
	unsigned short firstHalfSolve, endSolve;

	std::cin >> firstHalfSolve >> endSolve;

	if (endSolve - firstHalfSolve > firstHalfSolve)
	{
		std::cout << "H";
	}
	else
	{
		std::cout << "E";
	}

	return 0;
}