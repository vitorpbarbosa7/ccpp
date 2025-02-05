#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Allocate memory for 5 integers
    int *pi = (int*) malloc(5 * sizeof(int));

    // Check if memory allocation was successful
    if (pi == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Set all bytes of the allocated memory to 0 using memset
    memset(pi, 0, 5 * sizeof(int));

    // Print the values of the array (should be all zeros)
    for (int i = 0; i < 5; i++) {
        printf("pi[%d] = %d\n", i, pi[i]);  // All values should be 0
    }

    // Free the allocated memory
    free(pi);

    return 0;
}

