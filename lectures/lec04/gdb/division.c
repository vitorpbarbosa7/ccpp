#include <stdio.h>

void buggyFunction() {
    int a = 10;
    int b = 0;
    printf("Result: %d\n", a / b);  // This will cause a division by zero error
}

int main() {
    printf("Starting the program...\n");
    buggyFunction();
    return 0;
}

