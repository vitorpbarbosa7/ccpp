#include "myprint.h"

int main() {

    char* ptr;

    ptr = "abc";

    printInt(sizeof(*ptr));

    myprint(ptr+2);
    return 0;
}
