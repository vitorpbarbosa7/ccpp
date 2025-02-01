#include <stdio.h>

// Function definition
void my_function(int x) {
    printf("Value: %d\n", x);
}

int main() {
    // Declare a function pointer
    void (*f)(int);

    // Assign the function to the pointer
    f = my_function;

    // Call the function via the pointer
    f(10);  // Outputs: Value: 10

		printf("%p", (void*)&f);

    return 0;
}

