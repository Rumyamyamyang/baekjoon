// https://x.com/rumya_study/status/1818647702466625606

#include <iostream>

int main()
{
	int n{ 0 }, minusDegC{ 0 };
	long long crystal{ 1 };

	std::cin >> n >> minusDegC;

	for (int i = 1; i <= minusDegC; ++i)
	{
		crystal += (n - 2) * i + 1;
	}

	std::cout << crystal;
	
	return 0;
}