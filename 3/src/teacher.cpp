#include <utility>

#include "../headers/teacher.hpp"

Teacher::Teacher() : Human(), start_work_date(Date()) {}

// std::move is used to indicate that an object T may be "moved from",
// i.e. allowing the efficient transfer of resources from T to another object.
Teacher::Teacher(std::string _middle_name, std::string _name, std::string _sir_name) :
        Human(std::move(_middle_name), std::move(_name), std::move(_sir_name)),
        start_work_date(Date()){}

Teacher::Teacher(std::string _middle_name, std::string _name, std::string _sir_name, Date birth, Date work) :
        Human(std::move(_middle_name), std::move(_name), std::move(_sir_name), birth),
        start_work_date(work){
}

Date Teacher::getStartWorkDate() const {
    return start_work_date;
}

void Teacher::setStartWorkDate(size_t _day, size_t _month, size_t _year) {
    start_work_date = Date(_day, _month, _year);
}
