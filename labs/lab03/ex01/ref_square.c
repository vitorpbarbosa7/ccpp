#include <stdio.h>

void square(int* ptr_num) {
    // dereferencing to modify its value on the address itself
    *ptr_num = *ptr_num * *ptr_num;
}


int main() {
    int x = 4;
    int* ptr = &x;
    // pointer is a memory location, so here we need to pass the 
    // memory address, and not the value itself
    square(ptr);
    printf("%d\n",x);
    printf("%d\n",*ptr);
    printf("%p\n", &x);
    printf("%p\n", ptr);
    return 0;
}

