#include <stdio.h>

int main() {
  // uninitilized variables:
  int x;
  printf("%d\n", x);

  // out of bounds array access:
  char reversed[20];
  char out_of_bounds = reversed[21];
  printf("%c alsdjf", out_of_bounds);

  return 0;
}
