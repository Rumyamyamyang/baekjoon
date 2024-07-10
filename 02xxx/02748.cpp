#include <iostream>
#include <vector>

int main()
{
	int input_number{ 0 };

	std::cin >> input_number;

	std::vector<long long> dp(input_number + 1, -1);

	dp[0] = 0;
	dp[1] = 1;

	for (size_t i = 2; i < dp.size(); ++i)
	{
		if (dp[i] != -1)
		{
			continue;
		}

		dp[i] = dp[i - 1] + dp[i - 2];
	}

	std::cout << dp[input_number];
}