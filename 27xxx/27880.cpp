// https://x.com/rumya_study/status/1811191570332606728

#include <iostream>
#include <string>

int main()
{
	// 1 escalater step : 21cm
	// 1 stair : 17cm

	std::string type;
	int height{ 0 }, sumHeight{ 0 };
	constexpr int escalater{ 21 }, stair{ 17 };

	while (std::cin >> type >> height)
	{
		if (type == "Es")
		{
			sumHeight += height * escalater;
		}
		else if (type == "Stair")
		{
			sumHeight += height * stair;
		}
	}

	std::cout << sumHeight;

	return 0;
}