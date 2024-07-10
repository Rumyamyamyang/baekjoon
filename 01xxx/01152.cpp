#include <iostream>
#include <string>

int main()
{
	std::string sentence;
	char store_char = ' ';
	int word = 0;

	std::getline(std::cin, sentence);

	for (int i = 0; i < sentence.size(); ++i)
	{
		if (store_char == ' ' && store_char != sentence[i])
		{
			++word;
		}

		store_char = sentence[i];
	}

	std::cout << word;
}