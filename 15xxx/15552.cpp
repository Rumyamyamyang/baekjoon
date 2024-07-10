#include <iostream>

int main()
{
    int CASE, A, B;

    std::cin >> CASE;

    std::cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    for (int i = 0; i < CASE; i++)
    {
        std::cin >> A >> B;
        std::cout << A + B << "\n";
    }

    return 0;
}