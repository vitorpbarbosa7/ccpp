#include <stdio.h>

int main() {
    int x = 10;
    printf("x: %d\n", x);
    int* ptr;
    // no dereferencing to receive memory location
    ptr = &x;
    printf("x: %d\n", x);
    // dereference to receive value (change content at memory location)
    *ptr = 20;
    printf("x: %d\n", x);
    return 0;
}
