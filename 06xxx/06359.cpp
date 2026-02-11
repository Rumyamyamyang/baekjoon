// 2026-02-11

#include <iostream>
#include <vector>

int main()
{
	unsigned short testCase, roomNum;

	std::cin >> testCase;
	
	for (unsigned short i = 0; i < testCase; ++i)
	{
		unsigned short openedRoom = 0;

		// Create room and open all the room
		std::cin >> roomNum;

		std::vector<bool> rooms;
		rooms.assign(roomNum, true);

		// Do game round
		for (unsigned short j = 2; j <= roomNum; ++j)
		{
			unsigned short index = j;

			while (index <= roomNum)
			{
				rooms[index - 1] = !rooms[index - 1];
				index += j;
			}
		}
		
		// Count opened room
		for (bool isOpened : rooms)
		{
			if (isOpened)
			{
				++openedRoom;
			}
		}

		std::cout << openedRoom << '\n';
	}

	return 0;
}