#include <stdio.h>

void factorial(int n, int* result) {
    if (n==0){
        *result = 1;
        return;
    }
    factorial(n-1, result);
    *result = *result * n;
}

int main() {
    int num = 5; 
    int result = 1;

    factorial(num, &result);

    printf(" Factorial of %d is %d\n", num, result);

    return 0;
}
