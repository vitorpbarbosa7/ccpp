#include <stdio.h>

int main() {
    int *ptr = NULL;  // Null pointer
    printf("%d\n", *ptr);  // Dereferencing null pointer, causes segfault
    return 0;
}

