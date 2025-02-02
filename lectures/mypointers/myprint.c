#include <stdio.h>

void myprint(const char *str);

int main() {
  char *var = "abcdefg";
  myprint(var);
  return 0;
}

void myprint(const char *str) {
  while (*str != '\0') {
    putchar(*str);
    str++;
  }
}
