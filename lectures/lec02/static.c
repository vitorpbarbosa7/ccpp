#include <stdio.h>

void foo();

int main() {

  for (int i=0; i < 5; ++i) {
    foo();
  }
  foo();
  foo();
  return 0;
}


void foo() {
  // the function will be called several times, but no reinitilization
  // but only keeps the last value
  static int count = 0;
  printf("%d ", count++); 
}
