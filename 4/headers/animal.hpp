#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    const std::string name;
    const std::string favorite_food;
    const int color;
public:
    Animal(std::string _name, int _color, std::string _favorite_food);

    virtual std::string make_sound() = 0;
    virtual std::string eat() = 0;

    const std::string getName();
    const int getColor();
    const std::string getFavoriteFood();
};

#endif