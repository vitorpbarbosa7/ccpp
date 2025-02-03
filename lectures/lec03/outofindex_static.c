#include <stdio.h>

int main() {
    // Static memory allocation for an array
    int arr[5] = {1, 2, 3, 4, 5};

    // Accessing out-of-bounds index
    printf("arr[10]: %d\n", arr[10]);  // Undefined behavior, may print nonsense value

    return 0;
}

