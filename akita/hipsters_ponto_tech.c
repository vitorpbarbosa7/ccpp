#include <stdio.h>

void f(int *p) {
  printf("Address: %p\n", (void *)p);
  f(p); // Recursive call with the same pointer
}

int main() {
  int x = 42;
  f(&x);
  return 0;
}
