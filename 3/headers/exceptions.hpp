#ifndef EXCEPTIONS_HPP
#define EXCEPTIONS_HPP

#include <exception>
#include <iostream>
#include <utility>

namespace TimeErr {
    class wrong_format : std::exception {
    private:
        const char* message;
    public:
        explicit wrong_format() noexcept {
            message = nullptr;
            std::cerr << "Wrong format exception!";
        };
        explicit wrong_format(const char* _message) noexcept : message(_message) {}
        const char * what() const noexcept override {
            return message;
        }
    };
}

#endif