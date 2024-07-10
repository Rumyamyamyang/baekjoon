#include <iostream>
#include <string>

int main() {
  int problem{0}, panel{0}, prosNum{0};

  std::cin >> problem >> panel;
  std::string prosCons{""};

  for (int i = 0; i < problem; ++i) 
	{
    int pros{0};

    std::cin >> prosCons;

    for (char answer : prosCons) 
		{
      if (answer == 'O') {
        ++pros;
      }
    }

    if (pros > panel / 2) 
		{
      ++prosNum;
    }
  }

  std::cout << prosNum;
}