#define TEST false

#include <iostream>
#include <string>

bool IsPrime(int num) {
  // Treat 1 as a prime number
  if (num == 1) {
    return true;
  }

  // Check Prime
  for (int i = 2; i < num / 2 + 1; ++i) 
	{
    if (num % i == 0) 
		{
      return false;
    }
  }

  // Nothing available
  return true;
}

int main() {
  constexpr char upperA{65}, lowerA{97};
  constexpr char upperStart{27}, lowerStart{1};

  // Input
  std::string input{""};
  int num{0};
  std::cin >> input;

	
  // Check
  for (char c : input) {
    if (c >= 'a' && c <= 'z') 
		{
      num += static_cast<int>(c - lowerA + lowerStart);
    } 
		else if (c >= 'A' && c <= 'Z') 
		{
      num += static_cast<int>(c - upperA + upperStart);
    }
  }

#if TEST == true
	std::cout << num;
#endif
	
  if (IsPrime(num) == true) 
	{
    std::cout << "It is a prime word.";
  } 
	else 
	{
    std::cout << "It is not a prime word.";
  }

  return 0;
}