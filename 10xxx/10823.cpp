#define TEST false

#include <iostream>
#include <string>

void AddStringtoInt(int &result, std::string &number) 
{
  result += std::stoi(number);

#if TEST == true
  std::cout << "Number String : " << number << " / Current Result : " << result << '\n';
#endif

  number = "";
}

int main() 
{
  std::string input{""}, string{""};

  // Input string
  while (std::cin >> input) 
	{
    string += input;
  }

#if TEST == true
  std::cout << "\nCHECK STRING : " << string << '\n' << '\n';
#endif

  std::string number{""};
  int result{0};
  char c{0};
  int stringSize = static_cast<int>(string.size());

  for (int i = 0; i < stringSize; ++i) 
	{
    c = string[i];

    // End of number
    if (c == ',') 
		{
      AddStringtoInt(result, number);
      continue;
    }

    number += c;
  }

  AddStringtoInt(result, number);

  std::cout << result;
}