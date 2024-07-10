#include <iostream>
#include <string>

int main()
{
	std::string grade;
	std::cin >> grade;

	if (grade.front() == 'A')
	{
		if (grade.back() == '+')
		{
			std::cout << "4.3";
		}
		else if (grade.back() == '0')
		{
			std::cout << "4.0";
		}
		else if (grade.back() == '-')
		{
			std::cout << "3.7";
		}
	}
	else if (grade.front() == 'B')
	{
		if (grade.back() == '+')
		{
			std::cout << "3.3";
		}
		else if (grade.back() == '0')
		{
			std::cout << "3.0";
		}
		else if (grade.back() == '-')
		{
			std::cout << "2.7";
		}
	}
	else if (grade.front() == 'C')
	{
		if (grade.back() == '+')
		{
			std::cout << "2.3";
		}
		else if (grade.back() == '0')
		{
			std::cout << "2.0";
		}
		else if (grade.back() == '-')
		{
			std::cout << "1.7";
		}
	}
	else if (grade.front() == 'D')
	{
		if (grade.back() == '+')
		{
			std::cout << "1.3";
		}
		else if (grade.back() == '0')
		{
			std::cout << "1.0";
		}
		else if (grade.back() == '-')
		{
			std::cout << "0.7";
		}
	}
	else if (grade == "F")
	{
		std::cout << "0.0";
	}
}