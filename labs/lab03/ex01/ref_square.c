#include <stdio.h>

void square(int* ptr_num) {
    // dereferencing to modify its value on the address itself
    *ptr_num = *ptr_num * *ptr_num;
}


int main() {
    int x = 4;
    // pointer is a memory location, so here we need to pass the 
    // memory address, and not the value itself
    square(&x);
    printf("%d\n",x);
    return 0;
}

