#include <iostream>

int main()
{
    int CASE, A, B;

    std::cin >> CASE;

    for (int i = 1; i <= CASE; i++)
    {
        std::cin >> A >> B;
        std::cout << "Case #" << i << ": " << A + B << "\n";
    }

    return 0;
}