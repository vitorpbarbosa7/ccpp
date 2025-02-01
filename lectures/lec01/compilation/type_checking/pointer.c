#include <stdio.h>

int main() {
    int x = 42;           // An integer variable
    int *ptr = &x;        // A pointer pointing to x

    // Print details
    printf("Value of x: %d\n", x);                      // Value of x
    printf("Address of x: %p\n", (void*)&x);            // Address of x
    printf("Value stored in ptr (address of x): %p\n", (void*)ptr); // Address stored in ptr
    printf("Address of ptr itself: %p\n", (void*)&ptr); // Address of the pointer variable

    return 0;
}

