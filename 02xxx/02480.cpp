#include <iostream>
#include <algorithm>
#include <iterator>
#include <array>

bool descending(int a, int b)
{
  return a > b;
}

int main()
{
  constexpr unsigned char amount{3};
  std::array<int, amount> dice;

  for (int i = 0; i < amount; ++i)
  {
    std::cin >> dice[i];
  }
  
  std::sort(std::begin(dice), std::end(dice), descending);

  // All same
  if(dice[0] == dice[1] && dice[1] == dice[2])
  {
    std::cout << 10'000 + (dice[0] * 1'000);
  }
  // 2 same
  else if (dice[0] == dice[1] || dice[1] == dice[2])
  {
    std::cout << 1'000 + (dice[1] * 100);
  }
  // All different
  else
  {
    std::cout << 100 * dice[0];
  }

  return 0;
}