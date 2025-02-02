#include <stdio.h>

int main() {
    int num = 5;             // Declare an integer
    int *ptr = &num;         // Declare a pointer to the integer 'num'
    int **dptr = &ptr;       // Declare a double pointer to the pointer 'ptr'

    // Print values
    printf("Value of num: %d\n", num);             // Output: 5
    printf("Value of ptr: %p\n", (void*)ptr);      // Output: address of num
    printf("Value of dptr: %p\n", (void*)dptr);    // Output: address of ptr

    // Dereferencing the double pointer
    printf("Value pointed by dptr: %d\n", **dptr);  // Output: 5, dereferencing twice

    // Modifying the value of 'num' via the double pointer
    **dptr = 10;

    // Print the modified value
    printf("Modified value of num: %d\n", num);    // Output: 10

    return 0;
}

