// 2026-02-11

#include <iostream>

int main()
{
	unsigned short busStopNum, input;

	std::cin >> busStopNum >> input;

	// Useless input : output is always same
	for (unsigned short i = 0; i < busStopNum; ++i)
	{
		std::cin >> input >> input;
	}

	// Output is fixed
	std::cout << "비와이";


	return 0;
}