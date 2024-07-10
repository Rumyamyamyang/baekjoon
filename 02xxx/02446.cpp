#include <iostream>

int main()
{
	int input_number{ 0 };

	std::cin >> input_number;

	for (int n = input_number; n > 0; --n)
	{
		for (int blank = input_number - n; blank > 0; --blank)
		{
			std::cout << ' ';
		}


		for (int star = 2 * n - 1; star > 0; --star)
		{
			std::cout << '*';
		}

		//for (int blank = input_number - n; blank > 0; --blank)
		//{
		//	std::cout << ' ';
		//}

		std::cout << '\n';
	}

	for (int n = 2; n <= input_number; ++n)
	{
		for (int blank = input_number - n; blank > 0; --blank)
		{
			std::cout << ' ';
		}

		for (int star = 2 * n - 1; star > 0; --star)
		{
			std::cout << '*';
		}

		//for (int blank = input_number - n; blank > 0; --blank)
		//{
		//	std::cout << ' ';
		//}

		if (n == input_number)
		{
			continue;
		}

		std::cout << '\n';
	}
}