
#include <iostream>

int main()
{
	int sampleTest{ 0 }, systemTest{ 0 };
	int correctAnswer{ 0 }, outputAnswer{ 0 };

	std::cin >> sampleTest >> systemTest;

	std::string outputString{ "Accepted" };

	for (int i = 0; i < sampleTest; ++i)
	{
		std::cin >> correctAnswer >> outputAnswer;

		if (correctAnswer != outputAnswer)
		{
			outputString = "Wrong Answer";
		}
	}

	for (int i = 0; i < systemTest; ++i)
	{
		std::cin >> correctAnswer >> outputAnswer;

		if (correctAnswer != outputAnswer)
		{
			if (outputString == "Accepted")
			{
				outputString = "Why Wrong!!!";
			}
		}
	}

	std::cout << outputString;
}