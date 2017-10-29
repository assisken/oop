#include <sstream>
#include "../headers/time.hpp"

Time::Time(size_t _hour, size_t _minute) :
        hour(_hour), minute(_minute), second(0){}

Time::Time(size_t _hour, size_t _minute, size_t _second) :
        hour(_hour), minute(_minute), second(_second){}

const size_t Time::getHour() const {
    return hour;
}

const size_t Time::getMinute() const {
    return minute;
}

const size_t Time::getSecond() const {
    return second;
}

void Time::setHour(size_t _hour) {
    hour = _hour;
}

void Time::setMinute(size_t _minute) {
    minute = _minute;
}

void Time::setSecond(size_t _second) {
    second = _second;
}

const std::string Time::getFullTime() const {
    std::ostringstream stream;
    if(hour < 10)
        stream << '0';
    stream << hour << ':';
    if(minute < 10)
        stream << '0';
    stream << minute << ':';
    if(second < 10)
        stream << '0';
    stream << second;

    return stream.str();
}

const std::string Time::getTime() const {
    std::ostringstream stream;
    if(hour < 10)
        stream << '0';
    stream << hour << ':';
    if(minute < 10)
        stream << '0';
    stream << minute;

    return stream.str();
}