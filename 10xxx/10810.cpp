#define TEST true

#include <iostream>
#include <vector>

int main()
{
  int basketNum{0}, throwNum{0};
  int start{0}, end{0}, ballNumber{0};

  std::cin >> basketNum >> throwNum;
  std::vector<int> basket(basketNum, 0);

  // throwing
  for (int throwing = 0; throwing < throwNum; ++throwing)
  {
    std::cin >> start >> end >> ballNumber;

    for (int i = start - 1; i <= end - 1; ++i)
    {
      basket[i] = ballNumber;
    }
  }

  // output
  for (int ballNum : basket)
  {
    std::cout << ballNum << ' ';
  }

  return 0;
}