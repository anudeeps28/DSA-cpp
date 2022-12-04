#pragma once

#include <string>
class Time {
public:

    // constructors
    Time();
    Time(int aHour, int aMinute, int aSecond);

    // Public methods to access private members
    int getHour() const;
    int getMinute() const;
    int getSecond() const;

    // modifiers
    void setHour(int aHour);
    void setMinute(int aMinute);
    void setSecond(int aSecond);

    void PrintAMPM();
private:
    int hour;
    int minute;
    int second;
};

bool IsEarlierThan(const Time& t1, const Time& t2 );  
void someFunc(Time& t1, const Time& t2);