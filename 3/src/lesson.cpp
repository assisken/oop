#include "../headers/lesson.hpp"
#include <utility>

Lesson::Lesson() :
        title(std::string()), class_name(std::string()), teacher(std::string()), start(Time()), end(Time()){}

Lesson::Lesson(std::string _title, std::string _class_name, std::string _class_num) :
        title(std::move(_title)), class_name(std::move(_class_name)), class_num(std::move(_class_num)),
        teacher(std::string()), start(Time()), end(Time()) {}

Lesson::Lesson(std::string _title, std::string _class_name, std::string _class_num,
               std::string _teacher, Time _start, Time _end) :
        title(std::move(_title)), class_name(std::move(_class_name)), class_num(std::move(_class_num)),
        teacher(std::move(_teacher)), start(_start), end(_end) {}

std::string Lesson::getTitle() const {
    return title;
}

std::string Lesson::getClassName() const {
    return class_name;
}

std::string Lesson::getClassNum() const {
    return class_num;
}

std::string Lesson::getTeacher() const {
    return teacher;
}

Time Lesson::getStart() const {
    return start;
}

Time Lesson::getEnd() const {
    return end;
}

void Lesson::setTitle(std::string _title) {
    title = std::move(_title);
}

void Lesson::setClassName(std::string _class_name) {
    class_name = std::move(_class_name);
}

void Lesson::setClassNum(std::string _class_num) {
    class_num = std::move(_class_num);
}

void Lesson::setTeacher(std::string _teacher) {
    teacher = std::move(_teacher);
}

void Lesson::setStart(Time _start) {
    start = _start;
}

void Lesson::setEnd(Time _end) {
    end = _end;
}

Lesson &Lesson::operator=(Lesson &&other) noexcept {
    this->title = std::move(other.title);
    this->class_name = std::move(other.class_name);
    this->class_num = std::move(other.class_num);
    this->teacher = other.teacher;
    this->start = other.start;
    this->end = other.end;
//    std::cout << "Lesson has been moved" << std::endl;
}
