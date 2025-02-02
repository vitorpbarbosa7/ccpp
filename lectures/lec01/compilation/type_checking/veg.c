#include <stdio.h>
#include <string.h>

const char* vegetable(const char* day) {
  if (strcmp(day, "Tuesday") != 0) {
    return "tomato";
  } else {
    return "potato";
  }
}

int main() {
  const char *day1 = "Monday";
    
  // full string it points to 
  printf("%s", day1);
  // first character
  printf("\n%c", *day1);
  // memory location it is pointing to 
  printf("\n%p", (void*)day1);
  // the pointer itself location
  printf("\n%p", (void*)&day1);

  int x = 5;
  int *ptr = &x;

  printf("\n\n%d", *ptr);
  printf("\n%p", (void*)ptr);
  printf("\n%p", &ptr);
    
  // this would not work, integer and strings are treated different for this
 // int *y = 10;
 // printf("\n\n%d", y);
}

