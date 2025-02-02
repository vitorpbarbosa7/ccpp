#include <stdio.h>

int main() {

  char *ptr = "abc";

  for (int i=0; i<3; i++) {
    printf("%c ", ptr[i]);
  }
  printf("%s", ptr);

  return 0;
}
