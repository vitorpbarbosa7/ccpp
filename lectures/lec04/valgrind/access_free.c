#include <stdio.h>
#include <stdlib.h>

void memory_leak() {
    int *ptr = (int *) malloc(sizeof(int)); // Allocating memory
    *ptr = 42; // Storing value
    // No free(ptr), memory leak here
}

void use_after_free() {
    int *ptr = (int *) malloc(sizeof(int));
    *ptr = 10;
    free(ptr); // Freeing the memory
    *ptr = 20; // Accessing memory after it's been freed
}

int main() {
    memory_leak(); // Function with memory leak
    use_after_free(); // Function with use-after-free
    return 0;
}

