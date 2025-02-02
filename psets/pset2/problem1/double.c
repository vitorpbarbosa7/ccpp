#include <stdio.h>

// **argv points to array of pointers
// *argv is the array of pointers
// each pointer pointing to the first character on a string
int main(int argc, char **argv) {
  for (int i=1; i<argc; i++) {
    printf("%c\n", *argv[i]);  
    printf(" ");
    for (int j=0; j<3; j++) {
      printf("%c ",argv[i][j]);
    }
    printf("\n    %s\n", argv[i]);
  }
  return 0;
}
  
  
