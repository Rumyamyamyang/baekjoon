#include <iostream>

int main()
{
    struct Integer
    {
        int entire; // 전체
        int units;  // 1의 자리
        int tens;   // 10의 자리
        int hundereds;  // 100의 자리
    };

    int A;
    Integer B;

    // Get value
    std::cin >> A;
    std::cin >> B.entire;

    // 자리수 얻기
    B.units = B.entire % 10;
    B.tens = (B.entire / 10) % 10;
    B.hundereds = (int)(B.entire / 100);

    // 출력
    std::cout << A * B.units << "\n";
    std::cout << A * B.tens << "\n";
    std::cout << A * B.hundereds << "\n";
    std::cout << A * B.entire;

    return 0;
}