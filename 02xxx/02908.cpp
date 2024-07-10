#include <iostream>
#include <string>

int main()
{
	std::string A{ "000" }, B{ "000" };
	std::string new_A{ "000" }, new_B{ "000" };

	std::cin >> A >> B;

	for (int index = 0, new_index = 2; index < 3; ++index, --new_index)
	{
		new_A[new_index] = A[index];
		new_B[new_index] = B[index];
	}

	int new_A_int = std::stoi(new_A);
	int new_B_int = std::stoi(new_B);

	if (new_A_int > new_B_int)
	{
		std::cout << new_A_int;
	}
	else
	{
		std::cout << new_B_int;
	}
}