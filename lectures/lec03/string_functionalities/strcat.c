#include <stdio.h>
#include <string.h>

int main() {
    // Declare a character array with space for 14 characters
    char str1[14];  
    
    // Copy the string "hakuna" into str1
    strcpy(str1, "hakuna");

    // Concatenate " matata" to the end of str1
    strcat(str1, " matata");

    // Print the result
    printf("After strcat: %s\n", str1);  // Output: "hakuna matata"
    
    return 0;
}

