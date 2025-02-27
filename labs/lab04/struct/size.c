#include <stdio.h>
#include <stddef.h>

struct x {
	short s;
    int i;
    char c;
};

int main() {
    struct x example;

    printf("Size of struct x: %zu bytes\n", sizeof(struct x));
    printf("Offset of 's' in struct x: %zu bytes\n", offsetof(struct x, s));
    printf("Offset of 'i' in struct x: %zu bytes\n", offsetof(struct x, i));
    printf("Offset of 'c' in struct x: %zu bytes\n", offsetof(struct x, c));

    return 0;
}

