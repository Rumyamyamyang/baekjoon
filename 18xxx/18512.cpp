// https://x.com/rumya_study/status/1811266127647125528

#include <iostream>

int main()
{
	int posA{ 0 }, posB{ 0 };
	int speedA{ 0 }, speedB{ 0 };

	std::cin >> speedA >> speedB >> posA >> posB;

	// 100, 100, 100, 99 case
	// after 10000 times, difference will 100, so can't match
	for (int i = 0; i < 10000; ++i)
	{
		if (posA < posB)
		{
			posA += speedA;
		}
		else
		{
			posB += speedB;
		}

		if (posA == posB)
		{
			std::cout << posA;
			return 0;	// early return
		}
	}

	std::cout << "-1";

	return 0;
}