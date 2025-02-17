#include <iostream>
using namespace std;

// Base class for Color
class Color {
public:
    virtual void print() const {
        cout << "Color: Blue" << endl;
    }
};

// Base class for Mood
class Mood {
public:
    virtual void print() const {
        cout << "Mood: Calm" << endl;
    }
};

// Derived class inheriting from both Color and Mood
class Blue : public Color, public Mood {
public:
    void print() const override {
        Color::print();  // Call print from Color
        Mood::print();   // Call print from Mood
    }
};

int main() {
    Blue obj;
    obj.print();  // Outputs both Color and Mood
    return 0;
}

/* Explanation:
 * This example demonstrates multiple inheritance in C++.
 * The class `Blue` inherits from both `Color` and `Mood`.
 * The overridden `print` method calls each base class’s print method explicitly.
 * This ensures both base classes’ functionalities are included without ambiguity.
*/

