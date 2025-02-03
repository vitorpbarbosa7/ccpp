#include <stdio.h>

void recursiveFunction() {
    int largeArray[1000];  // Allocates memory on the stack
    printf("Calling recursiveFunction...\n");
    recursiveFunction();  // Recursive call with no termination
}

int main() { 
    recursiveFunction();
    return 0;
}

