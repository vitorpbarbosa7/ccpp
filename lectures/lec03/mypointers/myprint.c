#include <stdio.h>

void myprint(const char *str);

int main() {
  char *var = "abcdefg";
  myprint(var);
  return 0;
}

// particular find this notation better to relate to pointers
void myprint(const char *str) {
  while (*str != '\0') {
    putchar(*str);
    str++;
  }
}


// or:
// this is array like, just think about pointers as to the first location
// as the memory is an array, you can do whatever want from now on
//void myprint(const char *str) {
//  int i = 0;
//  while (str[i] != '\0') {  // Use array indexing instead of pointer arithmetic
//    putchar(str[i]);  // Access the character using indexing
//    i++;
//  }
//}
