#include <iostream>
#include <array>

int main()
{
	std::array<int, 6> chess_set{ 1, 1, 2, 2, 2, 8 };

	int piece;

	for(int i = 0; i < chess_set.size(); ++i)
	{
		std::cin >> piece;
		chess_set[i] -= piece;
	}

	for (int remain : chess_set)
	{
		std::cout << remain << " ";
	}
}