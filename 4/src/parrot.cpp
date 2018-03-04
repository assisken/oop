#include <sstream>
#include "../headers/parrot.hpp"

Parrot::Parrot() : Animal(), flying_speed(0), kills_by_voice(false), beats_wall(false) {}

Parrot::Parrot(std::string _name, size_t _color, std::string _favorite_food, size_t _flying_speed,
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

std::string Parrot::about() {
    std::ostringstream stream;
    stream << "Попугая зовут: " << name << std::endl;
    stream << "Попугай любит кушать: " << favorite_food << std::endl;
    stream << "Цвет попугая: 0x" << std::hex << color << std::endl;
    stream << "Попугай летает со скоростью " << flying_speed << " м/с" << std::endl;
    stream << "Убивает ли попугай голосом? ";
    if(kills_by_voice) {
        stream << "Убивает" << std::endl;
    } else {
        stream << "Не убивает" << std::endl;
    }
    stream << "Долбится ли попугай об стены? ";
    if(beats_wall) {
        stream << "Долбится" << std::endl;
    } else {
        stream << "Не долбится" << std::endl;
    }
    return stream.str();
}
