#include "../headers/animal.hpp"

Animal::Animal(const std::string _name, const int _color, const std::string _favorite_food) :
    name(_name), color(_color), favorite_food(_favorite_food) {}

const std::string Animal::getName() {
    return name;
}

const int Animal::getColor() {
    return color;
}

const std::string Animal::getFavoriteFood() {
    return favorite_food;
}
