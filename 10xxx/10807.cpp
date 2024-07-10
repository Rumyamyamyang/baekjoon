#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
  int amount{0}, input{0};
  std::vector<int> container;
  
  std::cin >> amount;

  for (int i = 0; i < amount; ++i)
  {
    std::cin >> input;
    container.push_back(input);
  }

  std::cin >> input;

  std::cout << std::count(std::begin(container), std::end(container), input);

  return 0;
}