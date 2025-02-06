#include <stdio.h>

void square(int num) {
    num = num * num;
}


int main() {
    int x = 4;
    // I know this will not modify the external variable 
    // passed as argument, x (this is pass by value and not pass by reference)
    square(x);
    printf("%d\n",x);
    return 0;
}
