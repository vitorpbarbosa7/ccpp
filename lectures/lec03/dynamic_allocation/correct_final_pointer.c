#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* name = (char*) malloc(strlen("Susan") + 1); // Allocate memory

    // Copy the string "Susan" into the allocated memory
    strcpy(name, "Susan");

    // Print the initial string (name points to the beginning of "Susan")
    printf("Initial string: %s\n", name);

    // Use array indexing instead of modifying the pointer
    for (int i = 0; name[i] != '\0'; i++) {
        printf("%c", name[i]);  // Print each character in the string
    }
    
    // The pointer still points to the start of the string, so we can safely print it again
    printf("\nFinal string: %s", name);

    // Free the allocated memory
    free(name);

    return 0;
}

