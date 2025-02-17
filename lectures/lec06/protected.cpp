#include <iostream>
using namespace std;

// Base class with a protected member
class Calculation {
protected:
    mutable int result;  // Protected member accessible by derived classes

public:
    virtual int compute(int a, int b) = 0;  // Pure virtual function without const

    void displayResult() const {
        cout << "Result: " << result << endl;
    }
};

// Derived class for addition
class Add : public Calculation {
public:
    int compute(int a, int b) override {
        result = a + b;  // Accessing protected member
        return result;
    }
};

// Derived class for power
class Power : public Calculation {
public:
    int compute(int a, int b) override {
        result = 1;
        for (int i = 0; i < b; ++i) {
            result *= a;  // Accessing protected member
        }
        return result;
    }
};

int main() {
    Add adder;
    Power powerCalc;

    int x = 2, y = 3;

    cout << "Addition: " << adder.compute(x, y) << endl;
    adder.displayResult();

    cout << "Power: " << powerCalc.compute(x, y) << endl;
    powerCalc.displayResult();

    return 0;
}

/* Explanation:
 * Fixed by removing const from compute() and using mutable for result.
 * Protected member `result` is accessible by derived classes Add and Power.
 * Derived classes can modify and use `result`, but it remains hidden from external users.
 */

