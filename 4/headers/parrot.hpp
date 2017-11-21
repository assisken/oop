#ifndef PARROT_HPP
#define PARROT_HPP

#include "animal.hpp"

class Parrot : Animal {
private:
    const size_t flying_speed;
    const bool kills_by_voice;
    const bool beats_wall;

public:
    Parrot() = default;
    Parrot(std::string _name, int _color, std::string _favorite_food, size_t _flying_speed,
           bool _kills_by_voice, bool _beats_wall);

    std::string make_sound();
    std::string eat();

    const size_t getFlyingSpeed();
    const bool isKillsByVoice();
    const bool isBeatsWall();
};

#endif