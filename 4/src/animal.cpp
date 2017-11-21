#include "../headers/animal.hpp"

Animal::Animal() {
    name = std::string();
    color = std::string();
    favorite_food = std::string();
}

Animal::Animal(std::string _name, std::string _color, std::string _favorite_food) :
    name(_name), color(_color), favorite_food(_favorite_food) {}
