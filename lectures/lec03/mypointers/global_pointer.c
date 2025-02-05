#include <stdio.h>
#include <stdlib.h>

int *global_ptr;  // Global pointer

void setGlobalPointer() {
    global_ptr = (int*) malloc(sizeof(int)); // Allocate memory for the pointer
    *global_ptr = 100;  // Set value
}

void printGlobalPointer() {
    printf("%d\n", *global_ptr);  // Access global pointer
}

int main() {
    setGlobalPointer(); // Set the value of global pointer
    printGlobalPointer(); // Print the value
    free(global_ptr);  // Don't forget to free memory
    return 0;
}

