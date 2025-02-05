#include <stdio.h>

void testConstantPointer() {
    int a = 5;
    int *const ptr = &a;  // Constant pointer
    *ptr = 10;  // You can modify the data it points to

    // ptr = &b;  // This would result in a compilation error because the pointer is constant
    printf("%d\n", *ptr);  // Prints 10
}

int main() {
    testConstantPointer();
    return 0;
}

