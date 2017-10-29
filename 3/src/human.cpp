#include "../headers/human.hpp"
#include <sstream>

Human::Human() : mid_name(std::string()), name(std::string()), sir_name(std::string()),
                 birth_date(Date()) {}

// std::move is used to indicate that an object T may be "moved from",
// i.e. allowing the efficient transfer of resources from T to another object.
Human::Human(std::string _middle_name, std::string _name, std::string _sir_name) :
        mid_name(std::move(_middle_name)), name(std::move(_name)), sir_name(std::move(_sir_name)),
        birth_date(Date()) {}

Human::Human(std::string _middle_name, std::string _name, std::string _sir_name, Date birth) :
        mid_name(std::move(_middle_name)), name(std::move(_name)), sir_name(std::move(_sir_name)),
        birth_date(birth) {}

std::string Human::getName() const {
    return name;
}

std::string Human::getSirName() const {
    return sir_name;
}

std::string Human::getMidName() const {
    return mid_name;
}

Date Human::getBirthDate() const {
    return birth_date;
}

void Human::setName(std::string _name) {
    name = std::move(_name);
}

void Human::setSirName(std::string _sir_name) {
    sir_name = std::move(_sir_name);
}

void Human::setMidName(std::string _mid_name) {
    mid_name = std::move(_mid_name);
}

void Human::setBirthDate(size_t _day, size_t _month, size_t _year) {
    birth_date = Date(_day, _month, _year);
}

std::string Human::getFullName() {
    std::ostringstream stream;
    stream << sir_name << ' ' << name << ' ' << mid_name;
    return stream.str();
}
