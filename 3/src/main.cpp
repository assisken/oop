#include <iostream>
#include "../headers/lesson_container.hpp"

using namespace std;

int main() {
    LessonContainer it = LessonContainer();
    it.addLesson(Lesson("Физика", "6а", "311а",
                        Teacher("Петров", "Петр", "Петрович"),
                        Time(8, 30), Time(9, 15)));
    it.addLesson(Lesson("Папа", "6а", "311а",
                        Teacher("Петров", "Петр", "Петрович"),
                        Time(8, 30), Time(9, 15)));
    it.addLesson(Lesson("Мама", "6а", "311а",
                        Teacher("Петров", "Петр", "Петрович"),
                        Time(8, 30), Time(9, 15)));
    it.addLesson(Lesson("Дядя", "6а", "311а",
                        Teacher("Петров", "Петр", "Петрович"),
                        Time(8, 30), Time(9, 15)));
    it.addLesson(Lesson("Археология", "6а", "311а",
                        Teacher("Петров", "Петр", "Петрович"),
                        Time(8, 30), Time(9, 15)));
    it.showLessons();
    it.removeLesson(109);
    it.removeLesson(12);
    it.showLessons();
}
