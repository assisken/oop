#include "template.h"

template<typename T>
Mass<T>::Mass() : container(nullptr), size(0) {}

template<typename T>
Mass<T>::Mass(T &_container, size_t &_size) : container(_container), size(_size) {}

template<typename T>
Mass<T>::~Mass() {
    if(container != nullptr)
        delete[] container;
}

template<typename T>
void Mass<T>::expand(size_t num) {
    if(container == nullptr) {
        container = new T[num];
        size = num;
    } else {
        size += num;
        auto *new_cont = new T[size];
        std::copy(container, container + size-1, new_cont);
        delete[] container;
        container = new_cont;
    }
}

template<typename T>
void Mass<T>::expand() {
    expand(1);
}

template<typename T>
Mass<T>& Mass<T>::operator = (const Mass<T> &other) {
    this->container = other.container;
    this->size = other.size;
    return *this;
}

template<typename T>
Mass<T> Mass<T>::operator << (const T &other) {
    expand();
    container[size-1] = other;
}

template <typename T>
Mass<T> Mass<T>::operator + (const Mass<T> &other) {
    Mass<T> out = *this;
    out.expand(other.size);
    for(size_t i = 0; i < other.size; i++)
        out.container[out.size + i] = other.container[i];
    return out;
}

template<typename T>
void Mass<T>::show() {
    std::cout << '[';
    for(size_t i = 0; i < size-1; i++) {
        std::cout << container[i] << ", ";
    }
    std::cout << container[size-1] << ']' << std::endl;
}
