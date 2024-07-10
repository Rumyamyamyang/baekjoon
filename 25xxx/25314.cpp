#include <iostream>
#include <string>

int main()
{
  // long int - 4 byte
  // long long int - 8byte

  int n;
  std::string type;

  // 4 byte : long 
  std::cin >> n;
  n /= 4;
  
  for (int i = 0; i < n; ++i)
  {
    type += "long ";
  }

  type += "int";

  std::cout << type;
  
  return 0;
}