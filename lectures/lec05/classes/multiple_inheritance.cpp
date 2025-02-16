#include <iostream>

class A {
public:
    void showA() { std::cout << "Class A" << std::endl; }
};

class B {
public:
    void showB() { std::cout << "Class B" << std::endl; }
};

class C : public A, public B {
public:
    void showC() { std::cout << "Class C" << std::endl; }
};

int main() {
    C obj;
    obj.showA();  // From class A
    obj.showB();  // From class B
    obj.showC();  // From class C
    return 0;
}

