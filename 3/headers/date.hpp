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
    ~Date() = default;
    Date(const Date& other) = default;
    Date(Date&& other) = default;
    Date& operator=(const Date& other) = default;
    Date& operator=(Date&& other) = default;

    Date(size_t _day, size_t _month, size_t _year);

    size_t getDay() const;
    size_t getMonth() const;
    size_t getYear() const;

    void setDay(size_t _day);
    void setMonth(size_t _month);
    void setYear(size_t _year);
};

#endif