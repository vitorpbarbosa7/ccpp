#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char* str = (char*) malloc(15*sizeof(char));
    strcpy(str, "hakuna matata!");
    
    printf("%s\n", str);
    printf("%c\n", str[0]);
    // address of the pointer itself in the stack
    printf("%p\n", &str);
    // addres of the first character in the array
    // since str[0] dereference to go to the char
    // and & gets the addres of this guy 
    printf("%p\n", &str[0]);

    for (int i = 0; i < 15; i++) {
        // single byte difference between the addresses
        // very cute, this ascii 255 bits thing
        // char very small char
        printf("%p\n", &str[i]);
    }

    free(str);
    str = NULL;

    return 0;
}
