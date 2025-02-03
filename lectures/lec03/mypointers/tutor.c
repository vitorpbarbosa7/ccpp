#include <stdio.h>

void printwords(char **arr);
void myprint(const char *str);

int main() {
  char *words[] = {"foo", "bar", "tar"};

  printwords(words);
  
  return 0;
}

void printwords(char **arr) {
  int i = 0;
  
  while (*arr != NULL){
    myprint(*arr);
    putchar('\n');
    arr++;
  }
}

// The same myprint function that prints a single string
void myprint(const char *str) {
  while (*str != '\0') {
    putchar(*str);  // Print the current character
    str++;          // Move to the next character
  }
}
