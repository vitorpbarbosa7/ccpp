#include <stdio.h>

void foo();

int main() {
  foo();
  return 0;
}


void foo(){
  for (int i = 0; i < 10; ++i) {
    printf("%d ", i);
    if (i==2) {
      i = 3;
      continue;
    } else if(i == 6){
      break;
    }
  }

  goto end;
  printf("near the end\n");
  end:
  printf("the end\n");
  return;
  printf("or is it?");
}



