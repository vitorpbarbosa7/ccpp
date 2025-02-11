#include <stdio.h>
#include <stddef.h>

struct x {
    char a;  // 1 byte
    short b; // 2 bytes
    int c;   // 4 bytes
    char d;  // 1 byte
};

int main() {
    struct x example;

    printf("Size of struct x: %zu bytes\n", sizeof(struct x));
    printf("Offset of 'a' in struct x: %zu bytes\n", offsetof(struct x, a));
    printf("Offset of 'b' in struct x: %zu bytes\n", offsetof(struct x, b));
    printf("Offset of 'c' in struct x: %zu bytes\n", offsetof(struct x, c));
    printf("Offset of 'd' in struct x: %zu bytes\n", offsetof(struct x, d));

    return 0;
}

