#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);

	int N, M;
	int arr[100001];

	std::cin >> N;

	for (int i = 0; i < N; ++i)
	{
		std::cin >> arr[i];
	}

	std::sort(arr, arr + N);

	std::cin >> M;

	for (int i = 0, number; i < M; ++i)
	{
		std::cin >> number;

		long long index = std::lower_bound(arr, arr + N, number) - arr;

		if (index < N && arr[index] == number)
		{
			std::cout << "1";
		}
		else
		{
			std::cout << "0";
		}

		std::cout << '\n';
	}
}