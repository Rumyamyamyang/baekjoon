// Better Code from : https://codecollector.tistory.com/1242

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
	int firstSecond{ 0 }, secondSecond{ 0 }, secondDiff{ 0 };

	constexpr int hourMax{ 24 };
	constexpr int hourToSec{ 3600 }, minToSec{ 60 };

	// Input two times
	std::cin >> first.hour >> partition >> first.minute >> partition >> first.second;
	std::cin >> second.hour >> partition >> second.minute >> partition >> second.second;

	// Obtain each second
	firstSecond = first.hour * hourToSec + first.minute * minToSec + first.second;
	secondSecond = second.hour * hourToSec + second.minute * minToSec + second.second;

	// Get second difference
	secondDiff = secondSecond - firstSecond;
	
	if (secondDiff < 0)
	{
		secondDiff += hourToSec * hourMax;
	}

	// Output
	std::cout << secondDiff;

	return 0;
}