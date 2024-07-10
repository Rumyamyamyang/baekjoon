#include <iostream>
#include <vector>

int main()
{
	int testCase{ 0 }, floor{ 0 }, room{ 0 }, num{ 0 };
	std::vector<int> roomList;

	std::cin >> testCase;

	int floorNum{ 0 }, roomNum{ 0 };

	for (int i = 0; i < testCase; ++i)
	{
		std::cin >> floor >> room >> num;

		floorNum = num % floor;
		

		roomNum = num / floor;

		if (floorNum == 0)
		{
			floorNum = floor;
		}
		else
		{
			++roomNum;
		}

		roomList.push_back( (floorNum * 100) + (roomNum) );
	}

	for (int eachRoom : roomList)
	{
		std::cout << eachRoom << '\n';
	}

	return 0;
}