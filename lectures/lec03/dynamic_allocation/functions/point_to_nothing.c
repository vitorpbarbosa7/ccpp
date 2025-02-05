#include <stdio.h>

int main() {
    int *pi;  // Declare a pointer but do not allocate memory

    // Attempt to dereference the pointer without allocating memory
    // This will likely cause a segmentation fault or print garbage data
    printf("%d\n", *pi);  // Dereferencing an uninitialized pointer

    return 0;
}

