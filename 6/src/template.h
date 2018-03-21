#ifndef TEMPLATE_HPP
#define TEMPLATE_HPP

#include <iostream>

template <typename T>
class Mass {
private:
    T* container;
    size_t size;
    void expand(size_t num);
    void expand();
public:
    Mass();
    Mass(T &_container, size_t &_size);
    ~Mass();

    Mass<T>& operator = (const Mass<T> &other);
    Mass<T> operator << (const T &other);
    Mass<T> operator + (const Mass<T> &other);

    void show();
};

#endif