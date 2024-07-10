#include <iostream>

int main()
{
	int song, melody, average;

	std::cin >> song >> average;

	melody = song * (average - 1);

	std::cout << melody + 1;

	return 0;
}