#include <iostream>
#include <string>
#include <vector>

int main()
{
	std::string input;
	int size{ 0 };
	std::vector<std::string> result;
	bool isNo = false;

	while (std::cin >> input)
	{
		if (input == "0")
		{
			break;
		}
		
		size = static_cast<int>(input.size());

		for (int i = 0; i < size / 2; ++i)
		{
			if (input[i] != input[size - i - 1])
			{
				result.push_back("no");
				isNo = true;
				break;
			}
		}
		
		if (isNo == true)
		{
			isNo = false;
		}
		else
		{
			result.push_back("yes");
		}
	}

	for (std::string str : result)
	{
		std::cout << str << '\n';
	}
	
	return 0;
}