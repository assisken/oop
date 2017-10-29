#ifndef LESSON_CONTAINER_HPP
#define LESSON_CONTAINER_HPP

#include "lesson.hpp"

class LessonContainer {
private:
    size_t size;
    Lesson* arr;
public:
    LessonContainer();
    ~LessonContainer();
    LessonContainer(const LessonContainer& other);
    LessonContainer(LessonContainer&& other) noexcept;
    LessonContainer& operator=(const LessonContainer& other);
    LessonContainer& operator=(LessonContainer&& other) noexcept;

    void showLessons();
    void addLesson(Lesson new_lesson);
    void removeLesson();
    void removeLesson(size_t index);
    void editLesson();
    void clearLesson();
};

#endif

// 1 - Показать книги;
// 2 - Добавить книгу;
// 3 - Удалить книгу;
// 4 - Изменить книгу;
// 5 - Очистить список;
// 0 - Выход;