#include <stdio.h>

// Function to compute the mean of an array
double mean(double *arr, int length) {
  if (length == 0)
    return 0.0; // Avoid division by zero

  double sum = 0.0;
  for (int i = 0; i < length; i++) {
    sum += arr[i];
  }
  return sum / length;
}
