#include <iostream>
using namespace std;

class Calculation {
public:
    virtual int compute(int a, int b) { printf("Base Calculation\n"); return 0; }
};

class Add : public Calculation {
public:
    int compute(int a, int b) override { printf("Add: %d\n", a + b); return a + b; }
};

class Multiply : public Calculation {
public:
    int compute(int a, int b) override { printf("Multiply: %d\n", a * b); return a * b; }
};

int main() {
    Add adder;
    Multiply multiplier;

    Calculation *calc1 = new Add;
    Calculation *calc2 = new Multiply;

    calc1->compute(10, 5);  // Outputs: Add: 15
    calc2->compute(10, 5);  // Outputs: Multiply: 50

    delete calc1;
    delete calc2;

    return 0;
}

/* Explanation:
 * This example uses the Calculation, Add, and Multiply classes.
 * Virtual functions enable dynamic binding at runtime.
 * The base class pointer calls the correct function based on the actual object type.
 */

