#include <sstream>
#include "../headers/dog.hpp"

Dog::Dog() : Animal(), happiness(0), is_wags(false), is_barks(false) {}

Dog::Dog(const std::string _name, const size_t _color, const std::string _favorite_food, const size_t _happiness,
         const bool _wags, const bool _barks)
        : Animal(_name, _color, _favorite_food), happiness(_happiness), is_wags(_wags), is_barks(is_barks) {

}

std::string Dog::make_sound() {
    return "Woof!";
}

std::string Dog::eat() {
    return "Om-nom-nom!";
}

const size_t Dog::hetHappiness() {
    return happiness;
}

const bool Dog::isWags() {
    return is_wags;
}

const bool Dog::isBarks() {
    return is_barks;
}

std::string Dog::about() {
    std::ostringstream stream;
    stream << "Собачку зовут: " << name << std::endl;
    stream << "Собачка любит кушать: " << favorite_food << std::endl;
    stream << "Цвет собачки: 0x" << std::hex << color << std::endl;
    stream << "Собачка счастлива на " << happiness << " баллов" << std::endl;
    stream << "Собачка виляет хвостом? ";
    if(is_wags) {
        stream << "Виляет" << std::endl;
    } else {
        stream << "Не виляет" << std::endl;
    }
    stream << "Собачка лает? ";
    if(is_barks) {
        stream << "Лает" << std::endl;
    } else {
        stream << "Не лает" << std::endl;
    }
    return stream.str();
}
