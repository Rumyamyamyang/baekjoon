#include <iostream>

int main()
{
    int HowMuch;

    std::cin >> HowMuch;    // Get How Much repeat
    
    for (int row = 1; row <= HowMuch; row++)
    {
        for (int column = 0; column < row; column++)
        {
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    return 0;
}