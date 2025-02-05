#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *string1;
    char *string2;

    // Allocate memory for 16 bytes (room for 15 characters + NUL terminator)
    string1 = (char*) malloc(16);

    // Copy a string into string1
    strcpy(string1, "0123456789AB");

    // Reallocate memory to a smaller size (8 bytes)
    string2 = realloc(string1, 8);

    // Print values of both string1 and string2
    printf("string1 Value: %p [%s]\n", string1, string1); // string1 points to the old address
    printf("string2 Value: %p [%s]\n", string2, string2); // string2 points to the new address (or same if realloc didn't move it)

    // Free the memory allocated for string2 (which may point to a new or old location)
    free(string2);

    return 0;
}

