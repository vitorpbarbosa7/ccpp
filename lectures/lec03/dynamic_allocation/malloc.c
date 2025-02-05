#include <stdio.h>
#include <stdlib.h>

int main() {
    // Static memory allocation
    int staticVar = 10; // Stack allocation
    int *ptr1 = (int *) malloc(sizeof(int)); // Dynamic memory allocation (Heap)
    int *ptr2 = (int *) malloc(sizeof(int)); // Another dynamic memory allocation (Heap)

    // Assigning values
    *ptr1 = 20;
    *ptr2 = 30;

    // Print memory addresses to see the difference
    printf("Address of static variable: %p\n", (void*)&staticVar);
    printf("Address of ptr1 (Heap, first allocation): %p\n", (void*)ptr1);
    printf("Address of ptr2 (Heap, second allocation): %p\n", (void*)ptr2);

    // Print values of dynamically allocated memory
    printf("Value at ptr1: %d\n", *ptr1);
    printf("Value at ptr2: %d\n", *ptr2);

    // Free dynamically allocated memory
    free(ptr1);
    free(ptr2);

    // Print the static variable value to show it is in the stack
    printf("Static variable value: %d\n", staticVar);

    return 0;
}

