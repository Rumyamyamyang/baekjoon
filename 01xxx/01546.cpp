#include <iostream>
#include <vector>

int main()
{
	int MAX_grade{ 0 };
	int subject_amount{ 0 };
	double average{ 0 };

	std::cin >> subject_amount;

	std::vector<int> subject_grade(subject_amount);
	std::vector<double> new_subject_grade(subject_amount);

	int grade{ 0 };

	for (int i = 0; i < subject_grade.size(); ++i)
	{
		std::cin >> grade;

		subject_grade[i] = grade;

		if (grade > MAX_grade)
		{
			MAX_grade = grade;
		}
	}

	for (int i = 0; i < subject_grade.size(); ++i)
	{
		new_subject_grade[i] = static_cast<double>(subject_grade[i]) / MAX_grade * 100.0;
	}


	for (double new_grade : new_subject_grade)
	{
		average += new_grade;
	}

	average /= subject_amount;

	std::cout << average;
}