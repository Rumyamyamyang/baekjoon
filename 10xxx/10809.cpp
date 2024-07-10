#include <iostream>
#include <string>
#include <map>

int main()
{
	std::string word;
	std::cin >> word;

	std::map<char, int> check_word;


	for (char word_ascii = 'a'; word_ascii <= 'z'; ++word_ascii)
	{
		check_word.insert({ word_ascii, -1 });
	}

	for (int i = 0; i < word.size(); ++i)
	{
		char word_ascii = word[i];
		auto map = check_word.find(word_ascii);

		if (map->second == -1)
		{
			check_word[word_ascii] = i;
		}
	}

	for (auto [character, index] : check_word)
	{
		std::cout << index << ' ';
	}
}