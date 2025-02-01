#include <stdio.h>

void backwards(char *str, int len){
  char reversed[len+1];
  int pos = 0;
  int caret = len;
  // null terminator for the string
  reversed[len] = '\0';
  for (int i = len - 1; i >= -1; --i) {
    // if reached maximum length backwards
    // or from the array of chars str, we found the empty string
    if (i == -1 || str[i] == ' '){
      for (int j = i + 1; j < caret; j++) {
        reversed[pos++] = str[j];
      }
      if (i != -1) {
        // add a separator here
        reversed[pos++] = ' ';
      }
      caret = i;
    }
  }
  printf("%s\n", reversed);
}

