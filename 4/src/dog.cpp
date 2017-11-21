#include "../headers/dog.hpp"

Dog::Dog(const std::string _name, const int _color, const std::string _favorite_food, const size_t _happiness,
         const bool _wags, const bool _barks)
        : Animal(_name, _color, _favorite_food), happiness(_happiness), is_wags(_wags), is_barks(is_barks) {

}

std::string Dog::make_sound() {
    return "Woof!";
}

std::string Dog::eat() {
    return "Om-nom-nom!";
}

const size_t Dog::hetHappiness() {
    return happiness;
}

const bool Dog::isWags() {
    return is_wags;
}

const bool Dog::isBarks() {
    return is_barks;
}
