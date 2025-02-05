#include <stdio.h>

int main() {
    int *ptr = NULL;  // Initialize a null pointer
    
    // Check if the pointer is null before dereferencing
    if (ptr == NULL) {
        printf("Pointer is NULL, cannot dereference it.\n");
    }

    // Attempt to dereference a null pointer (unsafe, this will crash)
    // printf("Dereferencing null pointer: %d\n", *ptr);  // Uncommenting this will cause a crash

    // Correctly assigning the pointer
    int value = 10;
    ptr = &value;  // Now ptr points to the address of 'value'
    printf("Pointer points to value: %d\n", *ptr);  // Dereference and print value

    return 0;
}

