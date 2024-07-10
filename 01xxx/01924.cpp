#include <iostream>
#include <string>


int main()
{
	// fast input output
	std::cin.tie(NULL);
	std::ios::sync_with_stdio(false);

	// start code
	int input_month, input_day;
	int total_date{ 0 };

	std::cin >> input_month >> input_day;

	for (int check_month = 1; check_month <= input_month; ++check_month)
	{
		switch (check_month)
		{
		// 1, 3, 5, 7, 8, 10, 12 month has 31days
		case 2: case 4: case 6: case 8: case 9: case 11:
			total_date += 31;
			break;

	    // 4, 6, 9, 11 month has 30 days
		case 5: case 7: case 10: case 12:
			total_date += 30;
			break;
		// 2 month has 28 days
		case 3:
			total_date += 28;
			break;

		// This will be input_month == 1
		default:
			break;
		}
	}

	total_date += input_day;

	// For get day of week
	total_date %= 7;

	switch (total_date)
	{
	case 0:
		std::cout << "SUN";
		break;

	case 1:
		std::cout << "MON";
		break;

	case 2:
		std::cout << "TUE";
		break;

	case 3:
		std::cout << "WED";
		break;

	case 4:
		std::cout << "THU";
		break;

	case 5:
		std::cout << "FRI";
		break;

	case 6:
		std::cout << "SAT";
		break;
	}
	


	return 0;
}