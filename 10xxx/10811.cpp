#define TEST true

#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
	int basketNum{0}, changeAmount{0};
	
	std::vector<int> basket;

	std::cin >> basketNum >> changeAmount;
	// Fill basket 
	for (int i = 0; i < basketNum; ++i)
	{
		basket.push_back(i + 1);
	}

	// Reverse
	int start{0}, end{0};
	for (int i = 0; i < changeAmount; ++i)
	{
		std::cin >> start >> end;

		std::reverse(std::begin(basket) + start - 1, std::begin(basket) + end);
	}

	// Print
	for (int num : basket)
	{
		std::cout << num << ' ';		
	}

	return 0;
}