#include <iostream>
#include <algorithm>

int main()
{
	int Input;
	int AllPlus = 0;

	std::cin >> Input;

	
	for (int i = 1; i <= Input; i++)
	{
		AllPlus += i;

		if (i == Input)
		{
			std::cout << AllPlus << std::endl;
		}
	}
}