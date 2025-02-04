#include <stdio.h>
#include "myprint.h"

// particular find this notation better to relate to pointers
void myprint(const char *str) {
  while (*str != '\0') {
    putchar(*str);
    str++;
  }
}

void printInt(int num) {
    if (num < 0) {
        putchar('-');
        num = -num;
    }
    if (num / 10) {
        printInt(num / 10);
    }
    putchar((num % 10) + '0');
}
