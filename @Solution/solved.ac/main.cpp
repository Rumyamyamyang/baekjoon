// 2026-04-08

#include <iostream>
#include <string>

int main()
{
	// -------------Fast cout-------------
	std::cin.tie(NULL);
	std::cin.sync_with_stdio(false);
	// -------------Fast cout-------------

	// Investigate 2992~9999
	for (int i = 2992; i < 10000; ++i)
	{
		// base10
		int number10 = i;
		int base10 = 0;

		while (number10 >= 10)
		{
			base10 += number10 % 10;
			number10 /= 10;
		}

		base10 += number10;	// Last add mod

		// base12
		int number12 = i;
		int base12 = 0;

		while (number12 >= 12)
		{
			base12 += number12 % 12;
			number12 /= 12;
		}

		base12 += number12;	// Last add mod

		// base16
		int number16 = i;
		int base16 = 0;

		// @ 1 : Forgot to change base16 calcultaion divisor to 16
		while (number16 >= 16)
		{
			base16 += number16 % 16;
			number16 /= 16;
		}

		base16 += number16;	// Last add mod


		// Output when all the digit add number is same
		if ((base10 == base12) && (base12 == base16))
		{
			std::cout << i << '\n';
		}
	}

	return 0;
}