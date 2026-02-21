// 2026-02-19

#include <iostream>
#include <string>

int main()
{
	std::string number;

	std::cin >> number;

	bool contain7 = false;
	bool divisableBy7 = (std::stoull(number) % 7 == 0);

	for (size_t i = 0; i < number.size(); ++i)	// @ 1st, use data type 'size_t' for the std::string::size() function
	{
		if (number[i] == '7')	// @ 1st, make a mistake to write = instead of ==
		{
			contain7 = true;
			break;
		}
	}

	// first set case to the both true
	// After that, check only one needed (opposite will false, because we checked both true case)
	// Finally, check nothing matched
	if (contain7 && divisableBy7)
	{
		// contain + divisable
		std::cout << 3;
	}
	else if (contain7)
	{
		// contain (X divisable)
		std::cout << 2;
	}
	else if (divisableBy7)
	{
		// divisable (X contain)
		std::cout << 1;
	}
	else
	{
		// X
		std::cout << 0;
	}

	return 0;
}