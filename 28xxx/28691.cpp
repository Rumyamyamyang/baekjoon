// 2026-03-10

#include <iostream>

int main()
{
	char input;

	std::cin >> input;

	switch (input)
	{
	case 'M':
	{
		std::cout << "MatKor";
	}
	break;

	case 'W':
	{
		std::cout << "WiCys";
	}
	break;

	case 'C':
	{
		std::cout << "CyKor";
	}
	break;

	case 'A':
	{
		std::cout << "AlKor";
	}
	break;

	case '$':
	{
		std::cout << "$clear";
	}
	break;


	}

	return 0;
}