// https://x.com/rumya_study/status/1816452437840109943
// Re15080.cpp

#include <iostream>

struct Time 
{
	int hour{ 0 };
	int minute{ 0 };
	int second{ 0 };
};

int main()
{
	Time first, second;
	char partition{ ':' };
	int temp{ 0 }, secondDiff{ 0 };

	constexpr int hourMax{ 24 }, minsecMax{ 60 };
	constexpr int hourToSec{ 3600 }, minToSec{ 60 };

	// Input two times
	std::cin >> first.hour >> partition >> first.minute >> partition >> first.second;
	std::cin >> second.hour >> partition >> second.minute >> partition >> second.second;

	// Second
	temp = second.second - first.second;

	if (temp < 0)
	{
		temp += minsecMax;
		++first.minute;
	}

	secondDiff += temp;

	// Minute
	if (first.minute == minsecMax)
	{
		first.minute = 0;
		++first.hour;
	}

	temp = second.minute - first.minute;

	if (temp < 0)
	{
		temp += minsecMax;
		++first.hour;
	}

	secondDiff += temp * minToSec;

	// Hour
	first.hour %= hourMax;

	temp = second.hour - first.hour;


	if (temp < 0)
	{
		temp += hourMax;
	}

	secondDiff += temp * hourToSec;


	// Output
	std::cout << secondDiff;

	return 0;
}