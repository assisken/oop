#ifndef DOG_HPP
#define DOG_HPP

#include "animal.hpp"

class Dog : public Animal {
private:
    const size_t happiness;
    const bool is_wags;
    const bool is_barks;

public:
    Dog();
    Dog(std::string _name, size_t _color, std::string _favorite_food, size_t _happiness, bool _wags, bool _barks);
    ~Dog() = default;

    std::string make_sound();
    std::string eat();
    std::string about();

    const size_t hetHappiness();
    const bool isWags();
    const bool isBarks();
};

#endif