#include <stdio.h>
// Parent Class
class Shape {
    public:
        // if no virtual destructor is given, so we can't cal delete for the circle
        virtual ~Shape();
        // if draw is not virtual, can't be declared pure
        // if we remove the =0 to make it non pure
        // the =0 is what makes this a pure abstract method which is implemented after
        // without =0 it needs a implementation
        virtual void draw();
};

// Child Class
class Circle: public Shape {
    public:
        // if destructor is not virtual, still works fine?
        // better to declare as virtual, because another one can inherit from this 
        virtual ~Circle();
        // this is not a pure virtual, can be inherited, overriden
        // and here is not the implementation yet
        virtual void draw();
};

//Implement shape destructor?
// Can we implement on top of virtual in the same base class?
Shape::~Shape() {
    printf("shape destructor\n");
}

// if =0 is removed from the virtual function, therefore we need to provides
// the implementation here
// but still the child class executes his overriden behavior
void Shape::draw() {
  printf("Shape::draw\n");
  }


Circle::~Circle(){
    printf("circle destructor\n");
}

void Circle::draw() {
    printf("Circle::draw\n");
}

int main(){
    Shape* shape = new Circle;
    shape->draw();
    delete shape;

    return 0;
}

/* Why declare a virtual destructor as pure?
 * Even if a destructor is virtual, it is often declared pure in abstract base classes to enforce that the class cannot be instantiated directly.
 * A pure virtual destructor still requires an implementation because the base class destructor must always be callable.
 * Without a virtual destructor, deleting a derived object through a base class pointer leads to undefined behavior and memory leaks.
 * Declaring it pure ensures the base class is an abstract class, but still provides a necessary implementation for proper cleanup.
 * In short:
 * - `virtual ~Shape() = 0;` ensures `Shape` is abstract and cannot be instantiated.
 * - Implementing `~Shape()` ensures correct destruction of derived objects.
 */

