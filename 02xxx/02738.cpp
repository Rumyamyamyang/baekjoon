#include <iostream>
#include <vector>

int main()
{
	int row{ 0 }, element{ 0 }, input{ 0 };

	std::cin >> row >> element;
	std::vector<std::vector<int>> sum(row);

	// First matrix
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < element; ++j)
		{
			std::cin >> input;
			sum[i].push_back(input);
		}
	}

	// Second matrix
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < element; ++j)
		{
			std::cin >> input;
			sum[i][j] += input;
		}
	}

	// output
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < element; ++j)
		{
			std::cout << sum[i][j] << ' ';
		}
		std::cout << '\n';
	}
}