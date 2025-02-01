#include <stdio.h>

void foo();

int main(){
  foo();
  return 0;
}


void foo() { 
  int a = 1;
  printf("%d",a);
  a = 2;
  printf("\n%d", a);
}

