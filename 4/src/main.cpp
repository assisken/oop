#include "../headers/cat.hpp"
#include "../headers/dog.hpp"
#include "../headers/parrot.hpp"

using namespace std;

int rand_index() {
    srand(time(NULL));      // семя
    return (rand() % 50);
}

int rand_color() {
    srand(time(NULL));      // семя
    return rand() % 0x1000000;
}

int main() {
    std::string Names[] = {
            "Шарик", "Лютик", "Пуптик", "Жгутик", "Полимерный Гарри", "Пирожочек", "Люцифер", "Мамона", "Асмодей",
            "Сатана", "Вельзевул", "Левиафан", "Бельфегор", "Пифон", "Велиал", "Мерихим", "Абаддон", "Астарот",
            "Август", "Тиберий", "Клемент", "Калигула", "Клавдий", "Скрибониан", "Нерон", "Гальба", "Отон", "Вителлий",
            "Веспасиан", "Тит", "Домициан", "Нерва", "Траян", "Адриан", "Пий", "Вер", "Аврелий", "Коммод", "Пертинакс",
            "Юлиан", "Север", "Каракалла", "Гета", "Макрин", "Диадумен", "Элагабал", "Пупиен", "Бальбин", "Гостилиан",
            "Эмилиан", "Постум"
    };

    int select;
    Cat cat;
    Dog dog;
    Parrot parrot;

    cout << "Введите количество циклов:";
    cin >> select;

    for(size_t i = 0; i < select; i++) {
//        Cat = Cat(Names[rand_index()], rand_color(), )
    }

    std::cout << Names[rand_index()];

    return 0;
}