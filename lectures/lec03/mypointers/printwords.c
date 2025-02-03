#include <stdio.h>

void printwords(char **arr);
void myprint(const char *str);

int main() {
  // Array of pointers to strings
  char *words[] = {"hello", "world", "this", "is", "C", "programming", NULL};
  
  // Pass the array of pointers to the printwords function
  printwords(words);
  
  return 0;
}

// Function to print each word in the array of strings
void printwords(char **arr) {
  int i = 0;
  
  while (*arr != NULL){
    myprint(*arr);
    putchar('\n');
    arr++;
  }
  
  /*
  // Loop through each element of the array
  while (arr[i] != NULL) {  // Until we encounter a NULL pointer (end of array)
    // Print each word (string) by passing it to myprint function
    myprint(arr[i]);  // Reusing the myprint function you already created
    putchar('\n');  // Print a newline after each word
    i++;
  }
  */
}

// The same myprint function that prints a single string
void myprint(const char *str) {
  while (*str != '\0') {
    putchar(*str);  // Print the current character
    str++;          // Move to the next character
  }
}

