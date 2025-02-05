#include <stdio.h>

int main() {
    int a = 10;
    char b = 'c';
    char* c = "abc";
    void *pv;  // A pointer to void

    // Assign the address of 'a' (int) to the void pointer
    pv = &a;
    printf("Void pointer pointing to int: %p\n", pv);
    // void pointer has no type, so we need to cast it to format it print
    printf("Void pointer pointing to int: %d\n", *(int*)pv);

    // Assign the address of 'b' (char) to the void pointer
    pv = &b;
    printf("Void pointer pointing to char: %p\n", pv);
    // casting to pointer to char
    printf("Void pointer pointing to char: %c\n", *(char*)pv);

    // Assign the address of 'c' (array of chars) to the void pointer 
    pv = &c;
    printf("Void pointer pointing to char*: %p\n", pv);
    // casting to pointer to pointers to char 
    // string = (pointers to char)
    printf("Void pointer pointing to char*: %s\n", *(char**)pv);


    // Check if two void pointers to NULL are equal
    void *null_ptr1 = NULL;
    void *null_ptr2 = NULL;

    if (null_ptr1 == null_ptr2) {
        printf("Two null void pointers are equal.\n");
    }

    return 0;
}

