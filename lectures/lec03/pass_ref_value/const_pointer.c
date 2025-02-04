#include <stdio.h>

void passingAddressOfConstants(const int* num1, int* num2);

int main() {
    const int limit = 100;
    int result = 5;
    printf("limit: %d, result: %d\n", limit, result);
    passingAddressOfConstants(&limit, &result);
    printf("limit: %d, result: %d\n", limit, result);
}


void passingAddressOfConstants(const int* num1, int* num2) {
    // changing their values, that is, the content for that memory address
    *num2 = *num1;
}

