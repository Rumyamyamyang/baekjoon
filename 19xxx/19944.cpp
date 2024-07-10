#include <iostream>

int main()
{
	int oldStandard{ 0 }, inputGrade{ 0 };

	std::cin >> oldStandard >> inputGrade;

	if (inputGrade <= 2)
	{
		std::cout << "NEWBIE!";
	}
	else if (inputGrade >= 3 && inputGrade <= oldStandard)
	{
		std::cout << "OLDBIE!";
	}
	else
	{
		std::cout << "TLE!";
	}

	return 0;
}