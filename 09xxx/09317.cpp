
#include <iostream>
#include <vector>
#include <cmath>

struct DPI
{
	double horizontal{ 0 };
	double vertical{ 0 };
};

int main()
{
	double d{ 0 };
	double width{ 0 }, height{ 0 };
	double w{ 0 }, h{ 0 };
	std::vector<DPI> dpi;

	while (std::cin >> d >> width >> height)
	{
		if (d == 0 && width == 0 && height == 0)
		{
			break;
		}

		w = 16.0 * d / std::sqrt(337);
		h = 9.0 * d / std::sqrt(337);

		
		dpi.push_back(DPI{ width / w, height / h });
	}

	std::cout << std::fixed;
	std::cout.precision(2);

	for (DPI output : dpi)
	{

		std::cout << "Horizontal DPI: " << output.horizontal << '\n';
		std::cout << "Vertical DPI: " << output.vertical << '\n';
	}

	return 0;
}