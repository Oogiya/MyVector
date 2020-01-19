#include <iostream>
#include "Container.cpp"

class Vector_Container : public Container {
public:
    Vector_Container(int s): v(s) {}
    int size() const override { return v.size(); }
    double& operator [](int i) override { return v[i]; }
    ~Vector_Container() {}
private:
    VectorClass v;
};