#include <iostream>
#include <string>

int main()
{
	std::string a, b;
	long long sum{ 0 };

	std::cin >> a >> b;

	for (int i = 0; i < a.size(); ++i)
	{
		for (int j = 0; j < b.size(); ++j)
		{
			sum += static_cast<int>(a[i] - '0') * static_cast<int>(b[j] - '0');
		}
	}

	std::cout << sum;

	return 0;
}