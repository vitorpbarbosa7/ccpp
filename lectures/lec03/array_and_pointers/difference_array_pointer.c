#include <stdio.h>

int main() {
   int vector[5] = {1,2,3,4,5};
    int *pv = vector;

    printf("%zu\n", sizeof(vector));
    printf("%zu\n", sizeof(pv));

    return 0;
}
