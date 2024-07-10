#include <iostream>

int main()
{
    int CASE, A, B;

    std::cin >> CASE;

    for (int i = 0; i < CASE; i++)
    {
        std::cin >> A >> B;
        std::cout << A + B << "\n";
    }

    return 0;
}