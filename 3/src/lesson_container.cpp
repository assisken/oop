#include <utility>

#include "../headers/lesson_container.hpp"
#include <algorithm>

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

void LessonContainer::expand() {
    size++;
    auto* new_arr = new Lesson[size];
    std::copy(arr, arr + size-1, new_arr);
    delete[] arr;
    arr = new_arr;
}

void LessonContainer::narrow() {
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

void LessonContainer::clear() {
    size = 0;
    delete[] arr;
    arr = nullptr;
}

void LessonContainer::show() {
    if(size == 0) {
        std::cout << "Уроков нет." << std::endl;
    } else {
        std::cout << "Уроки:" << std::endl;
        for (size_t i = 0; i < size; i++) {
            std::cout << i + 1 << ": " << arr[i].getTitle() << " (" << arr[i].getClassName() << ") - ";
            std::cout << arr[i].getTeacher() << " в " << arr[i].getClassNum() << " с ";
            std::cout << arr[i].getStart().getTime() << " до " << arr[i].getEnd().getTime() << std::endl;
        }
    }
}

void LessonContainer::add(Lesson new_lesson) {
    expand();
    arr[size-1] = new_lesson;
}

void LessonContainer::remove() {
    if(size > 1)
        narrow();
    else
        clear();
}

void LessonContainer::remove(size_t index) {
    if(!outOfBounds(index)) {
        if(size > 1) {
            size--;
            auto *new_arr = new Lesson[size];
            size_t ind = 0;
            std::copy_if(arr, arr + size + 1, new_arr, [&ind, index](Lesson l) {return ind++ != index; });
//            if(index == 0) {
//                std::copy(arr + 1, arr + size+1, new_arr);
//            } else if(index == size) {
//                std::copy(arr, arr + size, new_arr);
//            } else {
//                std::copy(arr, arr + index, new_arr);
//                std::copy(arr + index+1, arr + size+1, new_arr+index);
//            }
            delete[] arr;
            arr = new_arr;
        } else if(size == 1) {
            clear();
        }
    }
}

void LessonContainer::edit(size_t index, Lesson lesson) {
    if(!outOfBounds(index)) {
        arr[index] = std::move(lesson);
    }
}

bool LessonContainer::outOfBounds(size_t index) {
    if (index >= size) {
        throw std::out_of_range("большое число");
    }
    else
        return false;
}

