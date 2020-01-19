#ifndef VECTORCLASS_H
#define VECTORCLASS_H

#include <iostream>

class VectorClass {
public:
    VectorClass(int s);
    VectorClass(std::initializer_list<double> lst);
    ~VectorClass();
    double& operator[](int i);
    int size() const;
private:
    double* elem;
    int sz;
};

#endif