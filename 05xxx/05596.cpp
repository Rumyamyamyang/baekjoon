#include <iostream>

void get_total_score(int& number)
{
	for (int i = 0, input_number; i < 4; ++i)
	{
		std::cin >> input_number;
		number += input_number;
	}
}

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int A{ 0 };
	int B{ 0 };

	get_total_score(A);
	get_total_score(B);

	if (A >= B)
	{
		std::cout << A;
	}
	else
	{
		std::cout << B;
	}
}