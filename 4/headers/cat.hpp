#ifndef CAT_HPP
#define CAT_HPP

#include <iostream>
#include "animal.hpp"

class Cat : public Animal {
private:
    const size_t jump_size;
    const bool is_liquid;
    const bool likes_boxes;

public:
    Cat();
    Cat(std::string _name, size_t _color, std::string _favorite_food, size_t _jump_size, bool _is_liquid,
        bool _like_boxes);
    ~Cat() = default;

    std::string make_sound();
    std::string eat();
    std::string about();

    const size_t getJumpSize();
    const bool isLiquid();
    const bool likeBoxes();
};

#endif