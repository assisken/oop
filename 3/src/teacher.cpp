#include "../headers/teacher.hpp"

Teacher::Teacher(std::string _middle_name, std::string _name, std::string _sir_name) :
        mid_name(_middle_name), name(_name), sir_name(_sir_name) {
}

std::string Teacher::getName() {
    return name;
}

std::string Teacher::getSirName() {
    return sir_name;
}

std::string Teacher::getMidName() {
    return mid_name;
}

Date Teacher::getBirthDate() {
    return birth_date;
}

Date Teacher::getStartWorkDate() {
    return start_work_date;
}

void Teacher::setName(std::string _name) {

}

void Teacher::setSirName(std::string _sir_name) {

}

void Teacher::setMidName(std::string _mid_name) {

}

void Teacher::setBirthDate(size_t _day, size_t _month, size_t _year) {

}

void Teacher::setStartWorkDate(size_t _day, size_t _month, size_t _year) {l

}
