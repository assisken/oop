#ifndef TEACHER_HPP
#define TEACHER_HPP

#include "human.hpp"

class Teacher : public Human {
private:
    Date start_work_date;

public:
    Teacher();

    Teacher(std::string _middle_name, std::string _name, std::string _sir_name);
    Teacher(std::string _middle_name, std::string _name, std::string _sir_name, Date birth, Date work);

    Date getStartWorkDate() const;

    void setStartWorkDate(size_t _day, size_t _month, size_t _year);
};

#endif