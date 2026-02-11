#define TEST false

#include <iostream>
#include <algorithm>
#include <string>

int main()
{
	std::string octal, binary{ "" }, temp{ "" };
	int target{ 0 };

	std::cin >> octal;

	for (int i = 0; i < octal.size(); ++i)
	{
		target = octal[i] - '0';

		while (target != 0)
		{
			temp = std::to_string(target % 2) + temp;
			target /= 2;
		}

		while (temp.size() != 3)
		{
			temp = '0' + temp;
		}

		binary += temp;

#if TEST == true
		binary += "/";
#endif

		temp = { "" };
	}

	while (binary.front() == '0')
	{
		// num is 0
		if (binary.size() == 1)
		{
			break;
		}

		binary.erase(binary.begin());
	}

	std::cout << binary;
}