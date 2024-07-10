#include <iostream>
#include <vector>

int main()
{
	// First line
	unsigned int people_per_meter, area;
	unsigned int people;

	std::cin >> people_per_meter >> area;

	people = people_per_meter * area;

	// Second line
	int input_news;
	std::vector<int> news;
	
	while (std::cin >> input_news)
	{
		news.push_back(input_news);
	}

	// Output
	for (int news_value : news)
	{
		int output_value;

		output_value = news_value - people;

		std::cout << output_value << ' ';
	}


	return 0;
}