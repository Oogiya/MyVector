class VectorClass {
public:
    VectorClass(int s);
    double& operator[](int i);
    int size();
private:
    double* elem;
    int sz;
};