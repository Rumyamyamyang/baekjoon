#include <iostream>
#include <vector>

int main()
{
	int input{ 0 }, value{ 0 };
	std::vector<int> copyValue;

	std::cin >> input;

	for (int i = 0; i < input; ++i)
	{
		std::cin >> value;
		copyValue.push_back(value);
	}

	for (int num : copyValue)
	{
		std::cout << num << ' ' << num << '\n';
	}

	return 0;
}