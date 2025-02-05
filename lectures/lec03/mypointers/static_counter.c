#include <stdio.h>

void counterFunction() {
    static int counter = 0;  // This variable will persist between function calls
    counter++;  // Increment the counter
    printf("Counter: %d\n", counter);
}

int main() {
    counterFunction();  // Prints: Counter: 1
    counterFunction();  // Prints: Counter: 2
    counterFunction();  // Prints: Counter: 3
    return 0;
}

