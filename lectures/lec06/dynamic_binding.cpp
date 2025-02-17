// OOP Concepts: Data Abstraction and Dynamic Binding in C++
#include <iostream>
// "imports" all contained in the namespace std
using namespace std;

// Data Abstraction Example
class Calculation {
    public:
        // virtual to be able to create from it 
        // const says it does not modify internal members
        // = 0 to say is a pure virtual function
        virtual int compute(int a, int b) const = 0;
};

// Derived class for addition 
class Add: public Calculation {
    public:
        int compute(int a, int b) const override {
            return a + b;
    }
};


// Derived class for multiplication 
class Multiply : public Calculation {
    public:
        int compute(int a, int b) const override {
            return a * b;
        }
};

int main() {
    Add adder;
    Multiply multiplier;

    int x = 10, y = 5;

    cout << "Addition: " << adder.compute(x, y) << endl;
    cout << "Multiplication: " << multiplier.compute(x, y) << endl;

	// Pointer to the babies
    Calculation* calc = &adder;
    cout << "Dynamic Binding (Addition): " << calc->compute(x, y) << endl;

    calc = &multiplier;
    cout << "Dynamic Binding (Multiplication): " << calc->compute(x, y) << endl;

    return 0;
}

/* Explanation:
 * Base class Calculation has a pure virtual function `compute`.
 * Derived classes Add and Multiply implement this function.
 * Dynamic binding happens when a base class pointer calls the appropriate method at runtime.
 */
