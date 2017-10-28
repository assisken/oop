#ifndef TEACHER_HPP
#define TEACHER_HPP

#include <iostream>
#include "date.hpp"

class Teacher {
private:
    std::string name;
    std::string sir_name;
    std::string mid_name;
    Date birth_date;
    Date start_work_date;

public:
    Teacher() = default;
    ~Teacher() = default;
    Teacher(std::string _middle_name, std::string _name, std::string _sir_name);

    std::string getName();
    std::string getSirName();
    std::string getMidName();
    Date getBirthDate();
    Date getStartWorkDate();

    void setName(std::string _name);
    void setSirName(std::string _sir_name);
    void setMidName(std::string _mid_name);
    void setBirthDate(size_t _day, size_t _month, size_t _year);
    void setStartWorkDate(size_t _day, size_t _month, size_t _year);
};

#endif