#include <stdio.h>

struct example {
    char a;
    int b;
};

int main() {
    printf("Size of struct example: %zu bytes\n", sizeof(struct example)); // Output: 8 or 12 bytes (depends on padding)
    return 0;
}

