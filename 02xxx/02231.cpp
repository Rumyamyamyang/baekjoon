// https://x.com/rumya_study/status/1813015847298080909

#include <iostream>
#include <string>

int main()
{
	int input{ 0 }, sum{ 0 };
	std::string numString{ 0 };

	std::cin >> input;

	for (int i = 1; i <= input; ++i)
	{
		numString = std::to_string(i);
		sum = i;

		for (int j = 0; j < numString.size(); ++j)
		{
			// char string -> int number
			sum += numString[j] - '0';
		}

		if (sum == input)
		{
			std::cout << numString;
			return 0;	// early return
		}
		//// This could have error
		//else if (sum > input)
		//{
		//	sum = 0;
		//	break;
		//}
	}

	std::cout << "0";
	return 0;
}