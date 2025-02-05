#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *) malloc(sizeof(int)); // Pointer itself is on the stack, data is on the heap

    *ptr = 42;  // Assign a value to the memory location pointed to by ptr (heap memory)

    printf("Address of the pointer (stack): %p\n", (void*)&ptr); // Pointer's address on the stack
    printf("Address of the allocated memory (heap): %p\n", (void*)ptr); // Address on the heap
    printf("Value stored in heap memory: %d\n", *ptr); // Dereferencing the pointer to get the value stored in heap

    free(ptr);  // Free the dynamically allocated memory
    return 0;
}

