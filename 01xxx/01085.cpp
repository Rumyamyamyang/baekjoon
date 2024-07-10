#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

struct Difference
{
	int zero_x;
	int zero_y;

	int width;
	int height;
};



int main()
{
	// Fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	// Input value
	int x, y, width, height;

	std::cin >> x >> y >> width >> height;

	// Put difference in struct
	Difference difference;

	difference.zero_x = x;
	difference.zero_y = y;

	difference.width = width - x;
	difference.height = height - y;

	// vector to get the least value
	std::vector<int> store_difference{difference.zero_x, difference.zero_y, difference.width, difference.height};

	std::sort(store_difference.begin(), store_difference.end());

	// Print
	std::cout << store_difference[0];
}