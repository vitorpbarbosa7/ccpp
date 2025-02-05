#include <stdio.h>

void testConstPointer() {
    int a = 5;
    const int *ptr = &a;  // Pointer to constant data
    // *ptr = 10;  // This would result in a compilation error

    a = 10;  // You can modify 'a', since the data is not constant
    printf("%d\n", *ptr);  // Prints 10
}

int main() {
    testConstPointer();
    return 0;
}

