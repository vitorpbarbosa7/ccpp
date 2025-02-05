#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocating memory for 5 integers using malloc (not zero-initialized)
    int* ptr1 = (int*) malloc(5 * sizeof(int));

    // Allocating memory for 5 integers using calloc (zero-initialized)
    int* ptr2 = (int*) calloc(5, sizeof(int));

    // Print the values in the memory allocated by malloc (could contain garbage values)
    printf("Values in ptr1 (malloc, uninitialized): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr1[i]);  // Could show random values
    }
    printf("\n");

    // Print the values in the memory allocated by calloc (initialized to 0)
    printf("Values in ptr2 (calloc, initialized to 0): ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", ptr2[i]);  // Will always show 0
    }
    printf("\n");

    // Free the allocated memory
    free(ptr1);
    free(ptr2);

    return 0;
}

