// 2026-04-09

#include <iostream>

static void PrintIsBigger(int first, int last)
{
	// End of input
	if (first == 0 && last == 0)
	{
		return;
	}

	std::string answer = (first > last) ? "Yes" : "No";

	std::cout << answer << '\n';
}

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	int first, last;

	do
	{
		std::cin >> first >> last;
		PrintIsBigger(first, last);

	} while ((first != 0) && (last != 0));


	return 0;
}