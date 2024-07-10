#include <iostream>
#include <string>

int main()
{
	int a{ 0 }, b{ 0 }, c{ 0 };

	std::cin >> a;
	std::cin >> b;
	std::cin >> c;

	// num : typical arithmetic
	std::cout << a + b - c << '\n';
	

	// string : + add string / - treat as int -> subtract
	std::string aString, bString;

	aString = std::to_string(a);
	bString = std::to_string(b);

	aString += bString;

	std::cout << stoi(aString) - c;

	return 0;
}