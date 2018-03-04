#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    const std::string name;
    const std::string favorite_food;
    const size_t color;
public:
    Animal();
    Animal(std::string _name, size_t _color, std::string _favorite_food);

    virtual std::string make_sound() = 0;
    virtual std::string eat() = 0;
    virtual std::string about() = 0;

    const std::string getName();
    const size_t getColor();
    const std::string getFavoriteFood();
};

#endif