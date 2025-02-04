#include <stdio.h>

void swapWithPointers(int* pnum1, int* pnum2){
    int tmp;
    tmp = *pnum1;
    *pnum1 = *pnum2;
    *pnum2 = tmp;
}

int main() {
    int n1 = 5;
    int n2 = 10;
    // input to the function is not the value
    // but the reference to the value
    // that is, the pointer to the value
    printf("n1: %d, n2: %d", n1, n2);
    swapWithPointers(&n1, &n2);
    printf("\nn1: %d, n2: %d", n1, n2);
    return 0;
}

