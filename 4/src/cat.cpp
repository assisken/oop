#include "../headers/cat.hpp"
#include "../headers/animal.hpp"

Cat::Cat(const std::string _name, const int _color, const std::string _favorite_food, const size_t _jump_size,
         const bool _is_liquid, const bool _like_boxes)
        : Animal(_name, _color, _favorite_food), jump_size(_jump_size), is_liquid(_is_liquid), likes_boxes(_like_boxes) {
}

std::string Cat::make_sound() {
    return "Meow!";
}

std::string Cat::eat() {
    return "Yum!";
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
