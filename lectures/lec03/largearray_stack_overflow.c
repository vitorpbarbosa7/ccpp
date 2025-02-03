#include <stdio.h>

int main() {
    int largeArray[10000000000];  // Large array (~4 MB if int = 4 bytes)
    printf("Stack overflow may occur.\n");
    return 0;
}

