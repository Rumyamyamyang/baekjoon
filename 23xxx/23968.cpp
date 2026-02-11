#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

int main()
{
	int vecSize{ 0 }, targetChanged{ 0 }, input{ 0 }, changed{ -1 }, changedCount{ 0 };
	std::vector<int> container;
	std::string output{ "-1" };

	std::cin >> vecSize >> targetChanged;

	for (int i = 0; i < vecSize; ++i)
	{
		std::cin >> input;
		container.push_back(input);
	}

	while (changed != 0)
	{
		changed = 0;
		
		for (int i = 0; i < vecSize - 1; ++i)
		{
			if (container[i] > container[i + 1])
			{
				++changedCount;
				++changed;
				std::swap(container[i], container[i + 1]);

				if (changedCount == targetChanged)
				{
					output = (std::to_string(container[i]) + " " +
						std::to_string(container[i + 1]));

					break;
				}
				
			}
		}
	}

	std::cout << output;

	return 0;
}