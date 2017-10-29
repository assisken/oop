#include <utility>

#include "../headers/lesson_container.hpp"

LessonContainer::LessonContainer() : size(0), arr(nullptr) {}

LessonContainer::~LessonContainer() {
    delete[] arr;
}

LessonContainer::LessonContainer(const LessonContainer &other) {
    this->size = other.size;
    this->arr = new Lesson[this->size];
    std::copy(other.arr, other.arr + other.size - 1, this->arr);
}

LessonContainer::LessonContainer(LessonContainer &&other) noexcept {
    this->size = other.size;
    this->arr = other.arr;
}

LessonContainer &LessonContainer::operator=(const LessonContainer &other) {
    this->size = other.size;
    this->arr = new Lesson[this->size];
    std::copy(other.arr, other.arr + other.size - 1, this->arr);
    return *this;
}

LessonContainer &LessonContainer::operator=(LessonContainer &&other) noexcept {
    this->size = other.size;
    this->arr = other.arr;
    return *this;
}

void LessonContainer::showLessons() {
    std::cout << "Уроки:" << std::endl;
    for(size_t i = 0; i < size; i++) {
        std::cout << i+1 << ": " << arr[i].getTitle() << " (" << arr[i].getClassName() << ") - ";
        std::cout << arr[i].getTeacher().getFullName() << " в " << arr[i].getClassNum() << " с ";
        std::cout << arr[i].getStart().getTime() << " до " << arr[i].getEnd().getTime() << std::endl;
    }
}

void LessonContainer::addLesson(Lesson new_lesson) {
    size++;
    auto* new_arr = new Lesson[size];
    std::copy(arr, arr + size-1, new_arr);
    delete[] arr;
    new_arr[size-1] = std::move(new_lesson);
    arr = new_arr;
}

void LessonContainer::removeLesson() {
    if(size > 1) {
        size--;
        auto* new_arr = new Lesson[size];
        std::copy(arr, arr + size, new_arr);
        delete[] arr;
        arr = new_arr;
    } else if(size == 1) {
        size--;
        delete[] arr;
        arr = nullptr;
    }
}



void LessonContainer::removeLesson(size_t index) {
    index--;
    if(index < size) {
        if(size > 1) {
            size--;
            auto *new_arr = new Lesson[size];
            if(index == 0) {
                std::copy(arr + 1, arr + size+1, new_arr);
            } else if(index == size) {
                std::copy(arr, arr + size, new_arr);
            } else {
                std::copy(arr, arr + index, new_arr);
                std::copy(arr + index+1, arr + size+1, new_arr+index);
            }
            delete[] arr;
            arr = new_arr;
        } else if(size == 1) {
            size--;
            delete[] arr;
            arr = nullptr;
        }
    }
}

void LessonContainer::editLesson() {

}

void LessonContainer::clearLesson() {

}

