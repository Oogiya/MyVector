#include "../include/VectorClass.h"
#include <iostream>
//#include <stdexcept>

template<typename T>
VectorClass<T>::VectorClass(unsigned int n): elem{ new T[n] }, sz {n} {
    for (int i = 0; i != n; ++i) elem[i] = 0;
}
template<typename T>
VectorClass<T>::VectorClass(unsigned int n, const T &value): elem { new T[n] }, sz {n} {
    for (int i = 0; i != n; ++i) elem[i] = value;
}
template<typename T>
VectorClass<T>::VectorClass(std::initializer_list<T> lst): elem { new T[lst.size()] }, sz { lst.size() } {
    std::copy(lst.begin(), lst.end(), elem);
}
template<typename T>
VectorClass<T>::~VectorClass() {
    delete []elem;
}
template<typename T>
VectorClass<T>::VectorClass(VectorClass &&other) {
    elem = new T[other.sz];
    for (int i = 0; i < other.sz; ++i) elem[i] = std::move(other.elem[i]);
    sz = other.sz;
}
template<typename T>
VectorClass<T>::VectorClass(const VectorClass<T> &other): elem { new T[other.sz] }, sz { other.sz } {
    for (int i = 0; i != other.sz; ++i) elem[i] = other.elem[i];
}
template<typename T>
T& VectorClass<T>::operator [](unsigned int i) {
    return elem[i];
}
template<typename T>
unsigned int VectorClass<T>::size() const {
    return sz;
}