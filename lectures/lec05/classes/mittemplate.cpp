#include <iostream>

// Class template definition
template <class T>
class MyPair {
    private:
        T a, b;

    public:
        MyPair(T first, T second): a(first), b(second) {}
        T getMax(){ 
            return (a>b) ? a : b;
        }
};

int main() {
    // with integer
    MyPair<int> myInts(100, 75);
    std::cout << "Max value: " << myInts.getMax() << std::endl;

    MyPair<double> myDouble(5.5, 7.8);
    std::cout << "Max value: " << myDouble.getMax() << std::endl;

    MyPair<float> myFloat(3.3f, 2.2f);
    std::cout << "Max value: " << myFloat.getMax() << std::endl;
}

