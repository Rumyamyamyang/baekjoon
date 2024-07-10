#include <iostream>
#include <vector>

int main()
{
	int studentNum{ 0 }, subjectNum{ 0 };
	int input{ 0 };
	std::vector<int> percentage;

	std::cin >> studentNum >> subjectNum;

	for (int i = 0; i < subjectNum; ++i)
	{
		std::cin >> input;
		percentage.push_back(input * 100 / studentNum);
	}

	for (int i : percentage)
	{
		if (i <= 4)
		{
			std::cout << "1 ";
		}
		else if (i <= 11)
		{
			std::cout << "2 ";
		}
		else if (i <= 23)
		{
			std::cout << "3 ";
		}
		else if (i <= 40)
		{
			std::cout << "4 ";
		}
		else if (i <= 60)
		{
			std::cout << "5 ";
		}
		else if (i <= 77)
		{
			std::cout << "6 ";
		}
		else if (i <= 89)
		{
			std::cout << "7 ";
		}
		else if (i <= 96)
		{
			std::cout << "8 ";
		}
		else
		{
			std::cout << "9 ";
		}
	}

	return 0;
}