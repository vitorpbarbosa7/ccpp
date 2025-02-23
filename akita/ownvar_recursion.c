#include <stdio.h>

void f3(int depth) {    // Pass by value to create new stack frames
  int localVar = depth; // Each function call has its own local variable
  printf("Stack address at depth %d: %p\n", depth, &localVar);

  if (depth < 10) // Limit recursion depth to avoid stack overflow
    f3(depth + 1);
}

int main() {
  int localVar = 0;
  printf("Stack address from main: %p\n", &localVar);
  f3(1);

  return 0;
}
