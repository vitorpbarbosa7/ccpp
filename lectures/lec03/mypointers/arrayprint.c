#include <stdio.h>

void arrayprint(int *arr, int size);

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  arrayprint(arr, 5);
  return 0;
}


void arrayprint(int *arr, int size) {
  for (int i=0; i < size; i++) {
    putchar(*arr + '0'); // convert integer to character
    putchar(' ');
    arr++; // go to next location in memory
           // like we did in 6.004
           // computation structures
  }
  putchar('\n');
}
