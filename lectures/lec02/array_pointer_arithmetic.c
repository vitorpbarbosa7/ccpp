#include <stdio.h>

int main() {
    int arr[3] = {1, 2, 3};  // Declaring and initializing an array of integers

    // 1. Dereference array (first element)
    printf("First element: %d\n", *arr);  // Prints 1, dereferencing arr gives the first element

    // 2. Print the whole array using indexing
    printf("Array elements using indexing: ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", arr[i]);  // Prints 1 2 3
    }
    printf("\n");

    // 3. Print the whole array using pointer arithmetic
    printf("Array elements using pointer arithmetic: ");
    for (int i = 0; i < 3; ++i) {
        printf("%d ", *(arr + i));  // Prints 1 2 3
    }
    printf("\n");

    // 4. Print the address of the array and the address of the first element
    printf("Address of the array: %p\n", (void*)&arr);  // Address of the array
    printf("Address of the first element: %p\n", (void*)arr);  // Address of the first element

		

    return 0;
}

