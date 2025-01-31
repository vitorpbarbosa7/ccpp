#include <stdio.h>
#define PI 3.14
#define SQUARE(x) ((x) * (x))

int main() {
  double radius = 5.0;
  double area = PI * SQUARE(radius);

  printf("Area %.2f", area);
  return 0;
}
