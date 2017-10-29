#ifndef HUMAN_HPP
#define HUMAN_HPP

#include <iostream>
#include "date.hpp"

class Human {
protected:
    std::string name;
    std::string sir_name;
    std::string mid_name;
    Date birth_date;

public:
    ~Human() = default;
    Human(const Human& other) = default;
    Human(Human&& other) = default;
    Human& operator=(const Human& other) = default;
    Human& operator=(Human&& other) = default;

    Human();
    Human(std::string _middle_name, std::string _name, std::string _sir_name);
    Human(std::string _middle_name, std::string _name, std::string _sir_name, Date birth);

    std::string getName() const;
    std::string getSirName() const;
    std::string getMidName() const;
    Date getBirthDate() const;

    void setName(std::string _name);
    void setSirName(std::string _sir_name);
    void setMidName(std::string _mid_name);
    void setBirthDate(size_t _day, size_t _month, size_t _year);

    std::string getFullName();
};

#endif