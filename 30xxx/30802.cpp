// https://x.com/rumya_study/status/1811616468796371334

#include <iostream>
#include <vector>

int main()
{
	// size : S M L XL XXL XXXL (6)
	// Should not lack (pen + t-shirts)
	int participant{ 0 };

	
	std::vector<int> tshirts;
	
	int tshirtsBundle{ 0 }, penBundle{ 0 };

	// Input participant num
	std::cin >> participant;

	// Input tshits
	{
		int input_tshits{ 0 };
		for (int i = 0; i < 6; ++i)
		{
			std::cin >> input_tshits;
			tshirts.push_back(input_tshits);
		}
	}

	// Input bundle
	std::cin >> tshirtsBundle >> penBundle;

	
	// Output min bundle
	int orderTshits{ 0 };
	
	for (int amount : tshirts)
	{
		orderTshits += amount / tshirtsBundle;

		if (amount % tshirtsBundle != 0)
		{
			++orderTshits;
		}
	}

	// Output Terminal
	std::cout << orderTshits << '\n';
	std::cout << participant / penBundle << ' ' << participant % penBundle;
}