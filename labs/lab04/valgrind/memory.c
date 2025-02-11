#include <stdlib.h>
#include <stdio.h>

void fn()
{
    int* x = malloc(10 * sizeof(int));
    printf("%d",*x);
    x[10]=0;
    // did not freed the pointer
    // and did not assigned it to null
    // also trying to go out of index
    // index created was from 0 to 9, not from 0 or 1 to 10
}

int main()
{
    fn();
    return 0;
}

