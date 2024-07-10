#include <iostream>
#include <string>

int main()
{
	int input_value{ 0 };
	std::string status;
	int status_changed{ 0 };

	for (int ascend = 1, descend = 8; ascend <= 8; ++ascend, --descend)
	{
		std::cin >> input_value;

		if (input_value == ascend && (status_changed == 1 || status_changed == 0))
		{
			status = "ascending";
			status_changed = 1;
		}
		else if (input_value == descend && (status_changed == 2 || status_changed == 0))
		{
			status = "descending";
			status_changed = 2;
		}
		else
		{
			status = "mixed";
			break;
		}
	}

	std::cout << status;
}