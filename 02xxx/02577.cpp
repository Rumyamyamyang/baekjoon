#include <iostream>
#include <map>
#include <string>

int main()
{
	int A, B, C;
	int result_int;
	std::string result_string;

	std::map<char, int> number_used;

	for (char number = '0'; number <= '9'; ++number)
	{
		number_used.insert({ number, 0 });
	}

	std::cin >> A >> B >> C;
	
	result_int = A * B * C;

	result_string = std::to_string(result_int);

	for (char result_char : result_string)
	{
		++number_used[result_char];
	}

	for (auto [number, how_much] : number_used)
	{
		std::cout << how_much << '\n';
	}
	
}