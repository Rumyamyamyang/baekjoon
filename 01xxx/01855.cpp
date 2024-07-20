// https://x.com/rumya_study/status/1814657845180444915

#include <iostream>
#include <vector>
#include <string>

int main()
{
	int row{ 0 }, col{ 0 };
	std::string input;


	// Initialize vector size
	std::cin >> col;
	std::cin >> input;
	int inputSize = static_cast<int>(input.size());

	// 15 : col 3 row 5
	row = inputSize / col;
	
	// 16 : col 3 row 6
	if (inputSize % col != 0)
	{
		++row;
	}

	// Create privateKey table
	std::vector<std::vector<char>> privateKey(row, std::vector<char>(col));

	int index{ 0 };
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (index < inputSize)
			{
				if (i % 2 == 0)
				{
					privateKey[i][j] = input[index];
				}
				else
				{
					privateKey[i][col - j - 1] = input[index];
				}
				++index;
			}
			else
			{
				privateKey[i][j] = '?';
			}
		}
	}

	// Output original
	for (int i = 0; i < col; ++i)
	{
		for (int j = 0; j < row; ++j)
		{
			char c = privateKey[j][i];
			if (c != '?')
			{
				std::cout << c;
			}
		}
	}

	return 0;
}