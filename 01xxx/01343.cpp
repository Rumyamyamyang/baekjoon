
#include <iostream>
#include <string>

int main()
{
	std::string input, output;
	char check{ ' ' };
	int count{ 0 };
	std::string aPolyomino{ "AAAA" }, bPolyomino{ "BB" };

	std::cin >> input;

	for (int i = 0; i < input.size(); ++i)
	{
		check = input[i];

		// Check X amount
		if (check == 'X')
		{
			++count;
		}
		// . or last element
		if (check == '.' || i == input.size() - 1)
		{
			// Polyomino
			if (count % 2 == 0)
			{
				for (int j = 0; j < count / 4; ++j)
				{
					output += aPolyomino;
				}

				if (count % 4 == 2)
				{
					output += bPolyomino;
				}
			}
			// Fail case
			else
			{
				output = "-1";
				break;
			}

			// Add .
			if (check == '.')
			{
				output += ".";
			}

			count = 0;
		}
	}

	std::cout << output;
}