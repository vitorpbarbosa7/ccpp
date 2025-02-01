#include <stdio.h>

int foo();
int bar();

int main() {
  // variable func is a pointer, holds where foo is, the location in memory
  int (*func)(int, int) = &foo;
  printf("%p\n", &func);
  // not like a string would work, this really executes the whole fucking thing
  // by dereferencing
  int myresult = (*func)(2,2);
  printf("%d", myresult);
  int result = func(2,2);
  printf("%d ", result);


  // now for the bar
  // reassing the func pointer to another one
  func = &bar;
  result = func(2,2);
  printf("%d", result);
}


int foo(int a, int b) {
  return a + b;
}

int bar(int c, int d){
  return c - d;
}


