#include <iostream>

int main()
{
	// 1 : Rotate Right 90
	// 2 : Rotate Right 180
	// 3 : Rotate Left 90

	/*
	 N = treat this to 0
	W E
	 S
	*/
	constexpr int round{ 360 };
	int input{ 0 }, degree{ 0 };

	for (int i = 0; i < 10; ++i)
	{
		std::cin >> input;

		switch (input)
		{
		case 1:
			degree += 90;
			break;

		case 2:
			degree += 180;
			break;

		case 3:
			degree -= 90;
			break;
		}
	}

	degree %= round;

	if (degree < 0)
	{
		degree += round;
	}

	switch (degree)
	{
	case 0:
		std::cout << 'N';
		break;

	case 90:
		std::cout << 'E';
		break;

	case 180:
		std::cout << 'S';
		break;

	case 270:
		std::cout << 'W';
		break;
	}

	return 0;
}