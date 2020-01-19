#include <iostream>
#include "../include/VectorClass.h"

VectorClass::VectorClass(int s) :elem{new double[s]}, sz{s} {}
double& VectorClass::operator [](int i) { return elem[i]; }
int VectorClass::size() { return sz; }

