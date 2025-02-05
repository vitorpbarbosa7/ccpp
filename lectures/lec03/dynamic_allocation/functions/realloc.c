#include <stdio.h>
#include <stdlib.h>

int main() {
    // Allocate initial memory for 3 integers
    int *arr = (int*) malloc(3 * sizeof(int));

    // Fill the array with values
    for (int i = 0; i < 3; i++) {
        *(arr+i) = i + 1;
        printf("%d ", *(arr+i));
		printf("%p\n", (arr+i)); 
    }

    // Resize the array to hold 6 integers
    arr = (int*) realloc(arr, 6 * sizeof(int));

    // Fill the new part of the array
    for (int i = 3; i < 6; i++) {
        arr[i] = i + 1;
    }
	
	printf("\nAfter realocation\n");
    // Print the array values
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(arr+i));
		printf("%p\n", (arr+i)); 
    }

    free(arr);  // Don't forget to free the memory
    return 0;
}

