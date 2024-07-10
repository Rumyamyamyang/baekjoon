#define TEST true

#include <iostream>
#include <vector>

int main()
{
	int basketNum{0}, changeNum{0};
	std::vector<int> basket;
	
	std::cin >> basketNum >> changeNum;

	// Initialize
	for (int i = 0; i < basketNum; ++i)
	{
		basket.push_back(i + 1);
	}

	// Change!
	int firstBasket{0}, secondBasket{0}, storeNum{0};

	for (int i = 0; i < changeNum; ++i)
	{
		std::cin >> firstBasket >> secondBasket;

		// fast continue
		if (firstBasket == secondBasket)
		{
			continue;
		}
		

		// first : first / second : second / store : second
		storeNum = basket[secondBasket - 1];

		// first : first / second : first / store : second
		basket[secondBasket - 1] = basket[firstBasket - 1];

		// first : second / second : first / store : second
		basket[firstBasket - 1] = storeNum;		
	}


	// Print All!
	for (int num : basket)
	{
		std::cout << num << ' ';	
	}

	return 0;
}