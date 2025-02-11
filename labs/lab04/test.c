#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    // Declare a union variable
    union Data data;

    // Store an integer value in the union
    data.i = 10;
    printf("data.i: %d\n", data.i); // Outputs: data.i: 10

    // Store a float value in the same union (overwrites the integer)
    data.f = 220.5;
    printf("data.f: %.2f\n", data.f); // Outputs: data.f: 220.50

    // Store a string value in the union (overwrites the float)
    snprintf(data.str, sizeof(data.str), "Hello, World!");
    printf("data.str: %s\n", data.str); // Outputs: data.str: Hello, World!

    // Accessing the integer value again will show undefined behavior
    // because the union only stores one value at a time
    printf("data.i: %d\n", data.i); // Undefined behavior, could print garbage value

    return 0;
}

