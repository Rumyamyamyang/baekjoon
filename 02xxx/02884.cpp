#include <iostream>

int main()
{
    int Hour, Minute;

    std::cin >> Hour >> Minute;

    if (Minute >= 45)
    {
        std::cout << Hour << " " << Minute - 45;
    }
    else
    {
        if (Hour == 0)
        {
            // 00시 이전은 23시
            Hour = 23;

            std::cout << Hour << " " << Minute - 45 + 60;
        }
        else
        {
            std::cout << Hour - 1 << " " << Minute - 45 + 60;
        }
    }

    return 0;
}