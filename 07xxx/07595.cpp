#include <iostream>
#include <vector>

int main()
{
	int input;
	std::vector<int> triangleSize;

	// Input triangle size
	while (std::cin >> input)
	{
		// EOF
		if (input == 0)
		{
			break;
		}
		
		triangleSize.push_back(input);

		
	}

	// Print Triangle
	int triangleNum = static_cast<int>(triangleSize.size());
	
	for (int triangle = 0; triangle < triangleNum; ++triangle)
	{
		// New triangle
		if (triangle != 0)
		{	
			std::cout << '\n';
		}
		
		int size = triangleSize[triangle];
		
		// Draw triangle
		for (int row = 1; row <= size; ++row)
		{
			for (int i = 0; i < row; ++i)
			{
				std::cout << '*';	
			}

			// Last row
			if (row == size)
			{
				break;
			}
			
			// New Line
			std::cout << '\n';
		}
	}
	

	return 0;
}