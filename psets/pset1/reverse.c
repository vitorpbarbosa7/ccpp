#include <stdio.h>

void reverse(char *str, int len){
  char reversed[len+1];
  int pos = 0;
  int caret = len;
  // null terminator for the string
  reversed[len] = '\0';
  // we go back and go again forth, to added, and go back to continue to go back 
  for (int i = len - 1; i >= -1; --i) {
    // when a ' ' is found, we reached a word limit
    if (i == -1 || str[i] == ' '){
      for (int j = i + 1; j < caret; j++) {
        reversed[pos++] = str[j];
      }
      if (i != -1) {
        // add a separator here
        reversed[pos++] = ' ';
      }
      // now we have a new limit of the beginning of that word
      // caret here is like the cursor position
      caret = i;
    }
  }
  printf("%s\n", reversed);
}

