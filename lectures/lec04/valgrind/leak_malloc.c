#include <stdlib.h>

int main() {
    char* x = (char*) malloc(100); // Mem Leak!
    return 0;
}
