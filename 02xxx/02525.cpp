#include <iostream>

int main()
{
    constexpr int minuteToHour = 60;
    
    int hour{0}, minute{0}, elapsedHour{0}, elapsedMinute{0};
    
    std::cin >> hour >> minute;
    std::cin >> elapsedMinute;
    
    elapsedHour = elapsedMinute / minuteToHour;
    elapsedMinute %= minuteToHour;
    
    hour += elapsedHour;
    minute += elapsedMinute;
    
    if (minute >= 60)
    {
        ++hour;
        minute -= 60;
    }
    
    if (hour > 23)
    {
        hour -= 24;
    }
    
    std::cout << hour << ' ' << minute;
    
    return 0;
}