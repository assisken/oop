#ifndef TIME_HPP
#define TIME_HPP

#include <iostream>

class Time {
private:
    size_t hour;
    size_t minute;
    size_t second;

public:
    Time() = default;
    ~Time() = default;
    Time(const Time& other) = default;
    Time(Time&& other) = default;
    Time& operator=(const Time& other) = default;
    Time& operator=(Time&& other) = default;

    Time(size_t _hour, size_t _minute);
    Time(size_t _hour, size_t _minute, size_t _second);

    const size_t getHour() const;
    const size_t getMinute() const;
    const size_t getSecond() const;

    void setHour(size_t _hour);
    void setMinute(size_t _minute);
    void setSecond(size_t _second);

    const std::string getTime() const;
    const std::string getFullTime() const;
};

#endif