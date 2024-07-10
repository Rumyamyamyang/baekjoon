#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


int main()
{
	// Fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	// Input value
	int a, b, c;	// Triangle length

	// Calculate
	while (std::cin >> a >> b >> c)
	{
		// Sort ascending order
		std::vector<int> triangle_length{ a, b, c };
		std::sort(triangle_length.begin(), triangle_length.end());

		a = triangle_length[0];
		b = triangle_length[1];
		c = triangle_length[2];

		// End test case
		if (a == 0 && b == 0 && c == 0)
		{
			break;
		}
		
		// Pythagoras Thm
		if (c * c == a * a + b * b)
		{
			std::cout << "right" << '\n';
		}
		else
		{
			std::cout << "wrong" << '\n';
		}
	}
}