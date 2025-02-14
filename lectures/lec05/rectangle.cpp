#include <iostream>

class Rectangle {
    int* width;
    int* height;


public:
    Rectangle(int w, int h) {
        std::cout << "Constructor called!" << std::endl;
        // malloc equivalent to allocate space 
        width =  new int;
        height = new int;
        // dereferencing to assign value
        *width = w;
        *height = h;
    }

    // Destructor: Frees allocated memory
    ~Rectangle() {
        std::cout << "Destructor called!" <<std::endl;
        delete width;
        delete height;
    }

    void printMe() {
        std::cout << "Dimensions: " << *width << " by " << *height << std::endl;
    }
};


int main() {
    // Create an instance from this class
    Rectangle table(5,7);
    // call method
    table.printMe();
    return 0; // Destructor will be automatically called
}

