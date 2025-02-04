#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array with space for 14 characters
    char str1[14];  

    // Copy the string "hakuna" into str1
    strcpy(str1, "hakuna");

    // Print the result
    printf("After strcpy: %s\n", str1);  // Output: "hakuna"
    
    return 0;
}

