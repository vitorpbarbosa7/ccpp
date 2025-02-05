#include <stdio.h>

int main() {
    int *ptr = 0;  // Initialize the pointer to NULL (0 is treated as NULL in pointer context)

    // Check if the pointer is NULL (0)
    if (ptr == NULL) {
        printf("The pointer is NULL (0).\n");
    }

    // Alternatively, using 0 explicitly:
    if (ptr == 0) {
        printf("The pointer is NULL (0) using 0.\n");
    }

    // Dereferencing the null pointer (unsafe, commented out)
    // printf("%d\n", *ptr);  // This will cause a crash if uncommented

    return 0;
}

