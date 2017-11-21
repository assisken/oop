#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {
protected:
    std::string name;
    std::string color;
    std::string favorite_food;
public:
    Animal();
    Animal(std::string _name, std::string _color, std::string _favorite_food);
    ~Animal() = default;

    virtual void make_sound() = 0;
    virtual void eat() = 0;
};

#endif