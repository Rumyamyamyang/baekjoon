#define TEST true

// Only for random
#if TEST == true
#include <doodle/random.hpp>
#endif

#include <iostream>
#include <string>
#include <vector>
#include <array>
#include <algorithm>

int main()
{
	std::array<int, 3> length{0};
	std::vector<std::string> result;

	// Input
	while (std::cin >> length[0] >> length[1] >> length[2])
	{
		std::sort(length.begin(), length.end());

		// Already sort, [2] == 0, [0] == [1] == [2] == 0
		if (length[2] == 0)
		{
			break;
		}

#if TEST == true
		for (int i = 0; i < 3; ++i)
		{
			length[i] = doodle::random(1, length[i] + 1);
		}

		std::sort(length.begin(), length.end());

		result.push_back(std::to_string(length[0]) + ", " + 
				            std::to_string(length[1]) + ", " + 
							std::to_string(length[2]));
#endif

		// Already sort, [0] == [2] -> [0] == [1] == [2]
		if (length[0] == length[2])
		{
			result.push_back("Equilateral");
		}
		else if (length[0] == length[1] || length[1] == length[2])
		{
			result.push_back("Isosceles");
		}
		else
		{
			if (length[0] + length[1] > length[2])
			{
				result.push_back("Scalene");
			}
			else
			{
				result.push_back("Invalid");
			}
		}
	}

	// Output
	for (std::string output : result)
	{
		std::cout << output << '\n';
	}

#if TEST == true
	system("pause");
#endif

	return 0;
}