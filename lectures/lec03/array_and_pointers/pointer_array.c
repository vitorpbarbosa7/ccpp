#include <stdio.h>

int main(){
    int vector[5] = {1,2,3,4,5};
    // pointer location of first integer of this array of integers
    int *pv = vector;


    // if alone, return the address of first element of the array
    // strings are also like that
    printf("%p\n", vector);
    // memory location of first element of the array 
    printf("%p\n", &vector[0]);


    printf("%d\n", pv[2]);
    // using pointer arithmetic
    printf("%d\n", *(pv+2));

    return 0;
}
