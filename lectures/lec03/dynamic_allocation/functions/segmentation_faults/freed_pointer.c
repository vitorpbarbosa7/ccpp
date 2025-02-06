#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(sizeof(int));
    *ptr = 10;  // Assign a value
    free(ptr);  // Free the allocated memory
    printf("%d\n", *ptr);  // Dereferencing freed pointer, causes segfault
    return 0;
}
