#include "../include/VectorClass.h"
#include <iostream>
//#include <stdexcept>

VectorClass::VectorClass(int s) {
    if (s < 0) throw std::length_error{"Vector constructor: negative size"};
    elem = new double[s];
    sz = s;
    //initialize elements
    for (int i = 0; i != sz; ++i) elem[i] = 0;
}
VectorClass::VectorClass(std::initializer_list<double> lst): elem{new double[lst.size()]}, sz{static_cast<int>(lst.size())} {
    std::copy(lst.begin(), lst.end(), elem);
}
VectorClass::~VectorClass() {
    delete[] elem;
}
double& VectorClass::operator [](int i) { 
    if (i < 0 || size() <= i) throw std::out_of_range{"Vector::operator[]"};
    return elem[i];
}
int VectorClass::size() const { return sz; }

