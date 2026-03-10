// 2026-03-11

#include <iostream>
#include <cmath>

// 1st algorithm
// @ 1 : Time over, maybe only checking dividend : 1 case make infinite loop
// @ 2, 3 : Don't know about reasons
// @ 4 : Failed, need to change epsilon
// @ 5 : Add No part, but time exceeded (maybe, because result is 15)

// 2nd algorithm
// @ most of attempt : decimal has precision 8, but I tried different multiply.

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	double multiply = pow(10, 8);	// 10^8
	double decimal;

	std::cin >> decimal;

	std::cout << "YES" << '\n';

	std::cout << std::fixed;
	std::cout.precision(0);
	std::cout << decimal * multiply << ' ' << multiply;

	return 0;
}