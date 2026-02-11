// 2026-02-11

#include <iostream>

int main()
{
	unsigned short clauses, variableNum;
	short inputNum;

	std::cin >> clauses >> variableNum;

	for (unsigned short i = 0; i < clauses; ++i)
	{
		for (unsigned short j = 0; j < variableNum; ++j)
		{
			std::cin >> inputNum;
		}
	}

	// Ignore all the sentences, Øyvind considers about number of clauses
	if (clauses >= 8)
	{
		std::cout << "satisfactory";
	}
	else
	{
		std::cout << "unsatisfactory";
	}

	return 0;
}