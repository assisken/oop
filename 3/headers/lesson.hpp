#ifndef LESSON_HPP
#define LESSON_HPP

#include <iostream>
#include "time.hpp"

class Lesson {
private:
    std::string title;
    std::string class_name;
    std::string class_num;
    std::string teacher;
    Time start;
    Time end;

public:
    ~Lesson() = default;
    Lesson(const Lesson& other) = default;
    Lesson(Lesson&& other) = default;
    Lesson& operator=(const Lesson& other) = default;
    Lesson& operator=(Lesson&& other) noexcept;

    Lesson();
    Lesson(std::string _title, std::string _class_name, std::string _class_num);
    Lesson(std::string _title, std::string _class_name, std::string _class_num, std::string _teacher, Time _start, Time _end);

    std::string getTitle() const;
    std::string getClassName() const;
    std::string getClassNum() const;
    std::string getTeacher() const;
    Time getStart() const;
    Time getEnd() const;

    void setTitle(std::string _title);
    void setClassName(std::string _class_name);
    void setClassNum(std::string _class_num);
    void setTeacher(std::string _teacher);
    void setStart(Time _start);
    void setEnd(Time _end);
};

#endif