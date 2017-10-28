#include "../headers/date.hpp"

Date::Date(size_t _day, size_t _month, size_t _year) :
    day(_day), month(_month), year(_year) {

}

size_t Date::getDay() {
    return day;
}

size_t Date::getMonth() {
    return month;
}

size_t Date::getYear() {
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
