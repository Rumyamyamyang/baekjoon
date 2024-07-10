#include <iostream>

int main()
{
    int A, B;

    while (std::cin >> A >> B)
    {
        if (A == 0 && B == 0)
        {
            break;
        }

        std::cout << A + B << "\n";
    }

    return 0;
}