#include <stdio.h>

int main() {
    
  // this holds pointers, not strings
  // that is why in this arm m1 architecture, this is only 8 bytes
  // for a single pointer
  char *ptrs[] = {"longstring", "biggerstring", "muchmorestring"};

  int _base = sizeof(ptrs[0]);
  int _full_size = sizeof(ptrs);
  int elements = _full_size / _base;
  
  printf("%d bytes \n", _base);
  printf("%d bytes \n", _full_size);
  printf("%d bytes \n", elements);


  for (int i = 0; i < elements; i++) {
    printf("iterator %d \n", i + 1);

    printf("  Address of ptrs[%d]: %p\n", i, (void*)&ptrs[i]);

    printf("  Location ptrs[%d] is pointing to %p:\n", i, (void*)ptrs[i]); 
    
    // knows how to print using the null terminator
    printf("   Content at ptrs[%d] is %s\n", i, ptrs[i]);
    
    // the first character to where it points to is the dereference strings
    // string
    printf("  First letter of ptrs[%d] is %c:\n", i, *ptrs[i]);
  }



}

  
