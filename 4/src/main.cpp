#include "../headers/cat.hpp"
#include "../headers/dog.hpp"
#include "../headers/parrot.hpp"
#include <random>

using namespace std;

size_t rand_index() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 50);

    return dist(rng);
}

size_t rand_color() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 0xffffff);

    return dist(rng);
}

bool rand_bool() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 1);

    return static_cast<bool>(dist(rng));
}

size_t rand_num() {
    std::mt19937 rng;
    rng.seed(std::random_device()());
    std::uniform_int_distribution<std::mt19937::result_type> dist(0, 10);

    return dist(rng);

}

int main() {
    string Names[] = {
            "Шарик", "Лютик", "Пуптик", "Жгутик", "Полимерный Гарри", "Пирожочек", "Люцифер", "Мамона", "Асмодей",
            "Сатана", "Вельзевул", "Левиафан", "Бельфегор", "Пифон", "Велиал", "Мерихим", "Абаддон", "Астарот",
            "Август", "Тиберий", "Клемент", "Калигула", "Клавдий", "Скрибониан", "Нерон", "Гальба", "Отон", "Вителлий",
            "Веспасиан", "Тит", "Домициан", "Нерва", "Траян", "Адриан", "Пий", "Вер", "Аврелий", "Коммод", "Пертинакс",
            "Юлиан", "Север", "Каракалла", "Гета", "Макрин", "Диадумен", "Элагабал", "Пупиен", "Бальбин", "Гостилиан",
            "Эмилиан", "Постум"
    };

    string Foods[] = {
            "стена", "пол", "потолок", "лестница", "угол", "окно", "подоконник", "дверь", "мебель", "стул", "кресло",
            "стол", "кровать", "диван", "раскладушка", "шкаф", "полка", "сервант", "камин", "телевизор", "плита",
            "холодильник", "пылесос", "миксер", "утюг", "вафельница", "тостер", "фритюрница", "электропароварка",
            "соковыжималка", "лампа", "ковёр", "коврик", "шторы", "занавески", "жалюзи", "подушка", "простыня",
            "одеяло", "покрывало", "зеркало", "говядина", "свинина", "хлеб", "курятина", "корм", "пища со стола",
            "верёвка", "печенье", "банан"
    };

    int select;

    cout << "Введите количество объектов: ";
    cin >> select;

    while(select < 0) {
        std::cin.clear();
        std::cin.ignore(numeric_limits<streamsize>::max(),'\n');
        cout << "Введите ещё раз: ";
        cin >> select;
    }

    for(size_t i = 0; i < select; i++) {
        cout << i+1 << " объект:" << endl;
        if(i % 3 == 0) {
            cout << Cat(Names[rand_index()], rand_color(), Foods[rand_index()], rand_num(), rand_bool(), rand_bool())
                    .about() << endl;
        } else if(i % 3 == 1) {
            cout << Dog(Names[rand_index()], rand_color(), Foods[rand_index()], rand_num(), rand_bool(), rand_bool())
                    .about() << endl;
        } else {
            cout << Parrot(Names[rand_index()], rand_color(), Foods[rand_index()], rand_num(), rand_bool(), rand_bool())
                    .about() << endl;
        }
    }


    return 0;
}