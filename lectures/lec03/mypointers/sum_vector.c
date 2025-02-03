#include <stdio.h>

int main(){
  int vector[] = {28, 41, 7};
  int *pi = vector;
  int *location = vector;

  for (int i=0; i<3; i++) {
    printf("%d\n", *pi);
    pi++;
    printf("%p\n", location);
    location++;
  }
}

