#include <sstream>
#include "../headers/cat.hpp"
#include "../headers/animal.hpp"

Cat::Cat() : Animal(), jump_size(0), is_liquid(false), likes_boxes(false) {}

Cat::Cat(const std::string _name, const size_t _color, const std::string _favorite_food, const size_t _jump_size,
         const bool _is_liquid, const bool _like_boxes)
        : Animal(_name, _color, _favorite_food), jump_size(_jump_size), is_liquid(_is_liquid), likes_boxes(_like_boxes) {
}

std::string Cat::make_sound() {
    return "Meow!";
}

std::string Cat::eat() {
    return "Yum!";
}

std::string Cat::about() {
    std::ostringstream stream;
    stream << "Котика зовут: " << name << std::endl;
    stream << "Котик любит кушать: " << favorite_food << std::endl;
    stream << "Цвет котика: 0x" << std::hex << color << std::endl;
    stream << "Котик прыгает на высоту " << jump_size << " метров" << std::endl;
    stream << "Является ли котик жидкостью? ";
    if(is_liquid) {
        stream << "Да, является" << std::endl;
    } else {
        stream << "Нет, не является" << std::endl;
    }
    stream << "Котик любит коробки? ";
    if(likes_boxes) {
        stream << "Любит" << std::endl;
    } else {
        stream << "Не любит" << std::endl;
    }
    return stream.str();
}

const size_t Cat::getJumpSize(){
    return jump_size;
}

const bool Cat::isLiquid() {
    return is_liquid;
}

const bool Cat::likeBoxes() {
    return likes_boxes;
}