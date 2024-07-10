#include <iostream>
#include <string>
#include <unordered_map>

int main()
{
	int value{ 0 };
	int modulus{ 0 };
	int different_modulus{ 0 };
	std::unordered_map<int, int> check_modulus;

	for (int i = 0; i < 10; ++i)
	{
		std::cin >> value;

		modulus = value % 42;

		if (check_modulus.count(modulus) == 0)
		{
			++different_modulus;
			++check_modulus[modulus];
		}
	}

	std::cout << different_modulus;
}