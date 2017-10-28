#ifndef DATE_HPP
#define DATE_HPP

#include <iostream>

class Date {
private:
    size_t day;
    size_t month;
    size_t year;

public:

    Date() = default;
    Date(size_t _day, size_t _month, size_t _year);
    ~Date() = default;

    size_t getDay();
    size_t getMonth();
    size_t getYear();

    void setDay(size_t _day);
    void setMonth(size_t _month);
    void setYear(size_t _year);
};

#endif