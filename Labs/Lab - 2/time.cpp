#include <iostream>
#include "time.hpp"

Time::Time() { // default constructor
    hour = 0;
    minute = 0;
    second = 0;
}

Time::Time(int aHour, int aMinute, int aSecond) {
    hour = aHour;
    minute = aMinute;
    second = aSecond;
}

int Time::getHour() const {
    return hour;
}

int Time::getMinute() const {
    return  minute;
}

int Time::getSecond() const {
    return  second;
}

void Time::PrintAMPM() {
    if (hour > 12) {
        std::cout << hour - 12 << ":" << minute << ":" << second << " PM" << std::endl;
    } else {
        std::cout << hour  << ":" << minute << ":" << second << " AM" << std::endl;
    }
}

void Time::setHour(int aHour) {
    hour = aHour;
}

void Time::setMinute(int aMinute) {
    minute = aMinute;
}

void Time:: setSecond(int aSecond) {
    second = aSecond;
}

// sorting logic
bool IsEarlierThan(const Time& t1, const Time& t2) { // this is not a non-member function of the class = called by itself, not called on any object!
    if (t1.getHour() == t2.getHour()) {
        if (t1.getMinute() == t2.getMinute()) {
            if (t1.getSecond() < t2.getSecond()) {
                return true;
            }
        } else if (t1.getMinute() < t2.getMinute()) {
            return true;
        }

    }
    else if (t1.getHour() < t2.getHour()) {
        return true;
    }

    else {
        return  false;
    }

    return false;
}   


void someFunc(Time& t1, const Time& t2) {

}