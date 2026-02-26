// 2026-02-26

#include <iostream>


int main()
{
	std::string patient, doctor;

	std::cin >> patient;
	std::cin >> doctor;

	// last is always 'h'
	// need to check amount of 'a'
	
	// Because of the rule, we only need to check size of the string
	if (patient.size() >= doctor.size())
	{
		std::cout << "go";
	}
	else
	{
		std::cout << "no";
	}

	return 0;
}