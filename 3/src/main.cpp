#include <iostream>
#include <limits>
#include "../headers/lesson_container.hpp"
#include "../headers/exceptions.hpp"

using namespace std;

//std::string title;
//std::string class_name;
//std::string class_num;
//std::string teacher;
//Time start;
//Time end;

void clear_cin() {
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Lesson new_lesson() {
    string tmp;
    Lesson out = Lesson();
    cout << "Введите название урока:" << endl;
    std::getline(std::cin, tmp);
    out.setTitle(tmp);
    cout << "Введите номер класса:" << endl;
    std::getline(std::cin, tmp);
    out.setClassName(tmp);
    cout << "Введите номер аудитории:" << endl;
    std::getline(std::cin, tmp);
    out.setClassNum(tmp);
    cout << "Введите ФИО учителя:" << endl;
    std::getline(std::cin, tmp);
    out.setTeacher(tmp);

    cout << "Введите время начала урока: (hh:mm)" << endl;
    std::getline(std::cin, tmp);
    while(true) {
        try {
            out.setStart(Time(tmp));
            break;
        } catch (TimeErr::wrong_format& exception) {
            cout << "У вас " << exception.what() << ". Введите ещё раз:" << endl;
            std::getline(std::cin, tmp);
        } catch (...) {
            cout << "Непредвиденная ошибка." << endl;
        }
    }

    cout << "Введите время окончания урока: (hh:mm)" << endl;
    std::getline(std::cin, tmp);
    while(true) {
        try {
            out.setEnd(Time(tmp));
            break;
        } catch (TimeErr::wrong_format& exception) {
            cout << "У вас " << exception.what() << ". Введите ещё раз:" << endl;
            std::getline(std::cin, tmp);
        } catch (...) {
            cout << "Непредвиденная ошибка." << endl;
        }
    }

    return out;
}

int main() {
    size_t select = 1;
    LessonContainer lessons = LessonContainer();
    lessons.add(Lesson(
            "Биология", "5а", "501",
            "Пупкин Виталий Стримович",
            Time("13:15"), Time("14:00")
    ));
    lessons.add(Lesson(
            "Микрохимия", "6а", "501",
            "Пупкин Виталий Стримович",
            Time("13:15"), Time("14:00")
    ));
    lessons.add(Lesson(
            "Аналитическая органика", "7а", "501",
            "Пупкин Виталий Стримович",
            Time("13:15"), Time("14:00")
    ));

    do {
        cout << "1 - Показать уроки" << endl;
        cout << "2 - Добавить уроки" << endl;
        cout << "3 - Удалить уроки" << endl;
        cout << "4 - Изменить уроки" << endl;
        cout << "5 - Очистить уроки" << endl;
        cout << "0 - Выход" << endl;
        cin >> select;
        clear_cin();

        switch(select) {
            case 0:
                break;
            case 1:
                lessons.show();
                cout << endl;
                break;
            case 2:
                lessons.add(new_lesson());
                cout << "Добавление выполнено успешно!" << endl;
                break;
            case 3:
                cout << "Выберите урок к удалению." << endl;
                lessons.show();
                cin >> select;
                lessons.remove(select-1);
                cout << "Удаление выполнено успешно!" << endl;
                break;
            case 4:
                cout << "Выберите урок к редактированию." << endl;
                lessons.show();
                cin >> select;
                clear_cin();
                while(true) {
                    try {
                        lessons.outOfBounds(select);
                        break;
                    } catch (std::out_of_range& exception) {
                        cout << "Слишком большое число, введите ещё раз:" << endl;
                        cin >> select;
                        clear_cin();
                    }
                }
                lessons.edit(select-1, new_lesson());
                cout << "Редактирование выполнено успешно!" << endl;
                break;
            case 5:
                lessons.clear();
                cout << "Очищение выполнено успешно!" << endl;
                break;
            default:
                cout << "Неверно, попробуйте ввести ещё раз." << endl;
                break;
        }
    } while(select != 0);

}

// 1 - Показать книги;
// 2 - Добавить книгу;
// 3 - Удалить книгу;
// 4 - Изменить книгу;
// 5 - Очистить список;
// 0 - Выход;