#include <iostream>
#include <string>


int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int test_number{ 0 };
	int first, second;
	std::string test_case{ "" };

	std::cin >> test_number;
	
	for (int i = 0; i < test_number; ++i)
	{
		std::cin >> test_case;

		first = test_case[0] - '0';
		second = test_case[2] - '0';

		std::cout << first + second << '\n';
	}


	return 0;
}