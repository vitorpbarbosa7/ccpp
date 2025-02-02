#include <stdio.h>

int main(int argc, char **argv){

	int i = 1;
  
  looping:
	printf("%s\n", argv[i]);
  i++;
  if ( i >= argc) {
    goto end;
	}
  else {
    goto looping;
  }
	
  end:
	return 0;
}
