#ifndef LESSON_CONTAINER_HPP
#define LESSON_CONTAINER_HPP

#include "lesson.hpp"

class LessonContainer {
private:
    size_t size;
    Lesson* arr;

    void expand();
    void narrow();
public:
    LessonContainer();
    ~LessonContainer();
    LessonContainer(const LessonContainer& other);
    LessonContainer(LessonContainer&& other) noexcept;
    LessonContainer& operator=(const LessonContainer& other);
    LessonContainer& operator=(LessonContainer&& other) noexcept;

    bool outOfBounds(size_t index);

    void show();
    void add(Lesson new_lesson);
    void remove();
    void remove(size_t index);
    void edit(size_t index, Lesson lesson);
    void clear();
};

#endif

// 1 - Показать книги;
// 2 - Добавить книгу;
// 3 - Удалить книгу;
// 4 - Изменить книгу;
// 5 - Очистить список;
// 0 - Выход;