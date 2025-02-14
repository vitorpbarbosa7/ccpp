#include <iostream>

struct foo {
    int x;
    float y;
};


int main() {

    std::cout << "The value is: " << 42 << "\n";

    // Allocate an array of integers with new equivalent of malloc
    int* numArray = new int[10];

    // Fill the array using a for loop
    for (int i=0; i<10; ++i) {
        numArray[i] = i * 10;
    }

    // Display the array Contents
    std::cout << "Array contents";
    for (int i=0;i<10; ++i) {
        std::cout << numArray[i] << " ";
    }
    std::cout << std::endl;

    // Properly delete the array using delete[]
    delete[] numArray;

    // Allocate a struct with new 
    struct foo* bar = new foo;

    // Access and assign values to struct members
    bar->x = 42;
    bar->y = 3.14;

    // Print struct values
    std::cout << "bar->x " << bar->x << ", bar->y: " << bar->y << std::endl;

    // Free the struct
    // (similar to python del)
    delete bar;


    return 0;
}
