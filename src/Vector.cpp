#include <iostream>
#include "../test/VectorClassTest.cpp"
#include "../include/VectorClass.h"
#include "Vector_Container.cpp"

void UnitTests() {
    TestVectorClass();
}

int main() {
    //UnitTests();
    
    //VectorClass sv({3,7,2});
    //for(int i = 0; i != sv.size(); ++i) std::cout << sv[i] << std::endl;
    Vector_Container vc(10);
    std::cout << vc.size() << std::endl;
    
}