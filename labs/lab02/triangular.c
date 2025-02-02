#include <stdio.h>

#define SIZE 100


int* triangular(void);

int main() {
  int* array = triangular();   

  for (int i=0;i<SIZE;i++){
    printf("%d ", array[i]);
  }

  return 0;
}

int* triangular(void){

  static int arr[SIZE];

  int sum = 0;

  for (int i=0; i < SIZE; i++){
    sum = sum + i;
    arr[i] = sum;  
  }
    
  // return the pointer to the array first element
  return arr;
}
