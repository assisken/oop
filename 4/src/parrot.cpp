#include "../headers/parrot.hpp"

Parrot::Parrot(std::string _name, int _color, std::string _favorite_food, size_t _flying_speed,
               bool _kills_by_voice, bool _beats_wall)
        : Animal(_name, _color, _favorite_food), flying_speed(_flying_speed), kills_by_voice(_kills_by_voice),
          beats_wall(_beats_wall) {
}

std::string Parrot::make_sound() {
    return "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA!";
}

std::string Parrot::eat() {
    return "CRACKCRACKCRACK!";
}

const size_t Parrot::getFlyingSpeed() {
    return flying_speed;
}

const bool Parrot::isKillsByVoice() {
    return kills_by_voice;
}

const bool Parrot::isBeatsWall() {
    return beats_wall;
}