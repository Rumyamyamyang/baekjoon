#include <iostream>
#include <algorithm>
#include <iterator>
#include <array>

int main()
{
  constexpr int students{30};
  
  std::array<bool, students> assignment{false};

  // Input assignment done
  for (int i = 0, input = 0; i < 28; ++i)
  {
    std::cin >> input;
    assignment[input - 1] = true;
  }

  // find who doesn't
  for (int i = 0, count = 1; i < students; ++i)
  {
    if(assignment[i] == false)
    {
      std::cout << i + 1;

      // Check second students
      if (count == 2 )
      {
        break;
      }

      std::cout << '\n';
      ++count;
    }
  }
  
}