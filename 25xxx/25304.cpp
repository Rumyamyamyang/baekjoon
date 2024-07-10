#include <iostream>

int main()
{
  unsigned int sumPrice{0}, sumAmount{0}, checkPrice{0};

  // input sum of all items
  std::cin >> sumPrice;
  std::cin >> sumAmount;

  // Input each items
  unsigned int amount{0}, price{0};

  for(int i = 0; i < sumAmount; ++i)
  {
    std::cin >> amount >> price;

    checkPrice += amount * price;
  }

  if (sumPrice == checkPrice)
  {
    std::cout << "Yes";
  }
  else
  {
    std::cout << "No";
  }

  return 0;
}