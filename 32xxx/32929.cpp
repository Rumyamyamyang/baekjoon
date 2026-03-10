// 2026-03-10

#include <iostream>

int main()
{
	// This index starts with 1
	unsigned long long index;

	// index % 3 == 1  -> U
	// index % 3 == 2  -> O
	// index % 3 == 0  -> S

	// In above order, it should have s, u, o value
	char UOS[3] = { 'S', 'U', 'O' };

	std::cin >> index;

	std::cout << UOS[index % 3];
	

	return 0;
}