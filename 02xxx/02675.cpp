#include <iostream>
#include <string>

int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	int test_amount{ 0 };


	std::cin >> test_amount;

	for (int i = 0, repeat_amount; i < test_amount; ++i)
	{
		std::string base_string{ "" };
		std::string new_string{ "" };

		std::cin >> repeat_amount >> base_string;

		for (char check_string : base_string)
		{
			for (int repeat = 0; repeat < repeat_amount; ++repeat)
			{
				new_string += check_string;
			}
		}
		std::cout << new_string << '\n';
	}
}