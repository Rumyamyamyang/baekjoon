#define TEST false

#include <iostream>
#include <string>

void InitTemp(char c, std::string& temp)
{
	if (c == 'c' || c == 'd' || c == 'l' || c == 'n' || c == 's' || c == 'z')
	{
		temp = c;
	}
	else
	{
		temp = "";
	}
}

int main()
{
	std::string input, temp;
#if TEST == true
	std::getline(std::cin, input);
	input.erase(std::remove(input.begin(), input.end(), ' '), input.end());
#else
	std::cin >> input;
#endif
	int count{ 0 };

	for (char c : input)
	{
		// Check first char that exist in Croatia alphabet
		if (temp.empty())
		{
			InitTemp(c, temp);
			++count;
		}
		// Need to check Croatia or not
		else
		{
			// 'd' start
			if (temp.front() == 'd')
			{
				// d- dz=
				if (c == '-' || c == '=')
				{
					temp = "";
				}
				// dz= (Only check "d" case)
				else if (temp == "d" && c == 'z')
				{
					temp += c;
				}
				else
				{
					if (temp == "dz")
					{
						++count;
					}

					InitTemp(c, temp);
					++count;
				}
			}
			// c= c- d- s= z=
			else if (c == '=' || c == '-')
			{
				temp = "";
			}
			// lj, nj
			else if ((temp == "l" || temp == "n") && c == 'j')
			{
				temp = "";
			}
			else
			{
				InitTemp(c, temp);
				++count;
			}
		}
	}

	// dz end 
	if (temp == "dz")
	{
		++count;
	}

	std::cout << count;

#if TEST == true
	std::cout << '\n';
	system("pause");
#endif
	return 0;
}