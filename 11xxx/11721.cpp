#include <iostream>
#include <string>


int main()
{
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	std::string input_text;
	std::getline(std::cin, input_text);

	for (size_t i = 0; i < input_text.size(); ++i)
	{
		std::cout << input_text[i];

		if ( (i + 1) % 10 == 0 )
		{
			std::cout << '\n';
		}
	}

	return 0;
}