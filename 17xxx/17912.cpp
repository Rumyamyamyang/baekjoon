// 2026-04-07

#include <iostream>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int days, spaceJunk;
	int minJunkDay = 0;
	int minJunk = 0;

	std::cin >> days;
	std::cin >> minJunk;

	for (int i = 1; i < days; ++i)
	{
		std::cin >> spaceJunk;
		
		if (minJunk > spaceJunk)	// @ 1 : Problem wants min day when the minJunk is same.
		{
			minJunk = spaceJunk;
			minJunkDay = i;
		}
	}

	std::cout << minJunkDay;

	return 0;
}