#include <iostream>
#include <string>

int main()
{
	std::string input;
	std::cin >> input;
	
	if (input == "SONGDO")
	{
		std::cout << "HIGHSCHOOL";
	}
	else if (input == "CODE")
	{
		std::cout << "MASTER";
	}
	else if (input == "2023")
	{
		std::cout << "0611";
	}
	else if (input == "ALGORITHM")
	{
		std::cout << "CONTEST";
	}

	return 0;
}