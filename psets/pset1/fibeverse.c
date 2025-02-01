#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "fibonacci.h"
#include "reverse.h"

int main(int argc, char *argv[]) {
  printf("argument count: %d", argc);

  // arg 0 is the executable itself

  // arg 1 is the first argument passed to the executable
	int i = 1;

	if (i < argc) {
    printf("needs to print fib\n");
    // ascii to integer
		print_fib(atoi(argv[i]));
		i++;
	}

	if (i < argc) {
    // argv[i] will be the second argument , because i=2 here
    // the length of the string will be here as integer
    int str_length = strlen(argv[i]);
		reverse(argv[i], str_length);
		i++;
	}

	return 0;
}
