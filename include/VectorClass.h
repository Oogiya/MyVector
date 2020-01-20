#ifndef VECTORCLASS_H
#define VECTORCLASS_H

#include <iostream>

template <typename T>
class VectorClass {
public:
    //Constructors
    VectorClass(unsigned int n);
    VectorClass(std::initializer_list<T>);
    VectorClass(unsigned int n, const T &value);
    //Destructor
    ~VectorClass();
    //Copy Constructor
    VectorClass(const VectorClass<T> &);
    //Copy Assignment
    VectorClass<T> & operator =(const VectorClass<T> &);
    //Move Constructor
    VectorClass(VectorClass<T> &&);
    //Move Assignment
    VectorClass<T> & operator =(VectorClass<T> &&);
    
    T & operator[] (unsigned int i);
    
    unsigned int size() const;
    
private:
    unsigned int sz;
    T* elem;
};

#endif