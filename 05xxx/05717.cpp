// 2026-02-11

#include <iostream>

int main()
{
	short boyFriend, girlFriend;

	while (std::cin >> boyFriend >> girlFriend)
	{
		if (boyFriend == 0 && girlFriend == 0)
		{
			break;
		}

		std::cout << boyFriend + girlFriend << '\n';
	}

	return 0;
}