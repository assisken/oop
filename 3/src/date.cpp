#include "../headers/date.hpp"

Date::Date(size_t _day, size_t _month, size_t _year) :
    day(_day), month(_month), year(_year) {

}

size_t Date::getDay() const {
    return day;
}

size_t Date::getMonth() const {
    return month;
}

size_t Date::getYear() const {
    return year;
}

void Date::setDay(size_t _day) {
    day = _day;
}

void Date::setMonth(size_t _month) {
    month = _month;
}

void Date::setYear(size_t _year) {
    year = _year;
}
