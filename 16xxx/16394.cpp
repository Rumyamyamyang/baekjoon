/*C++
입력
cin 사용
예) cin >> var;
출력
cout 사용
예) cout << var;
필수 라이브러리 iostream
권장사항
using namespace std;
ios::sync_with_stdio(false);
cin.tie(NULL);*/

#include <iostream>

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    
    int year{ 0 };
    
    std::cin >> year;
    std::cout << year - 1946; 
}