#include <stdio.h>

int main() {

  char *ptrs[] = {"foo", "bar", "tar"};

  int _base = sizeof(ptrs[0]);
  int _full_size = sizeof(ptrs);
  int elements = _full_size / _base;
  
  printf("%d bytes \n", _base);
  printf("%d bytes \n", _full_size);
  printf("%d bytes \n", elements);

}

  
