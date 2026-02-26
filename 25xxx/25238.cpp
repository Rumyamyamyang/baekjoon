// 2026-02-26

#include <iostream>

int main()
{
	// @ 1st, int deletes decimal place
	float monsterDefense, UserIgnoreDefense;

	std::cin >> monsterDefense >> UserIgnoreDefense;

	float finalDefense = monsterDefense - (monsterDefense * UserIgnoreDefense / 100);

	// Can player damage to enemy?
	// For std::cout, boolean output appears with number
	// std::boolalpha to output with true false
	if (finalDefense >= 100)
	{
		std::cout << false;
	}
	else
	{
		std::cout << true;
	}

	return 0;
}