#include "../headers/animal.hpp"

Animal::Animal() : name(std::string()), color(0), favorite_food(std::string()) {
}

Animal::Animal(const std::string _name, const size_t _color, const std::string _favorite_food) :
    name(_name), color(_color), favorite_food(_favorite_food) {}

const std::string Animal::getName() {
    return name;
}

const size_t Animal::getColor() {
    return color;
}

const std::string Animal::getFavoriteFood() {
    return favorite_food;
}
