#include <iostream>
#include <string>
#include <map>

int main()
{
	std::string sentence;
	std::map<char, int> character_map;
	
	char most_used_character{'a'};

	std::cin >> sentence;

	for (char character : sentence)
	{
		character = static_cast<char> (std::toupper(character));

		++character_map[character];
	}


	int most_used_amount = 0;

	for (auto [character, amount] : character_map)
	{
		if (amount == most_used_amount)
		{
			most_used_character = '?';
		}

		if (amount > most_used_amount)
		{
			most_used_amount = amount;
			most_used_character = character;
		}
	}

	std::cout << most_used_character;


	return 0;
}