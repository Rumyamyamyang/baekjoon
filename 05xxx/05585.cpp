
#include <iostream>
#include <array>

int main()
{
	std::array<int, 6> changeStandard{ 500, 100, 50, 10, 5, 1 };
	int change{ 0 }, num{ 0 }, standard{ 0 };
	constexpr int money = 1000;

	std::cin >> change;

	change = money - change;

	while (change != 0)
	{
		// can change, subtract and increase num
		if (change - changeStandard[standard] >= 0)
		{
			change -= changeStandard[standard];
			++num;
		}
		// can not change, increase standard to see next changeStandard
		else
		{
			++standard;
		}
	}

	std::cout << num;
}