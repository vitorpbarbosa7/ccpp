#include <stdio.h>

union data {
    int x;   // 4 bytes
    char y;  // 1 byte
};

int main() {
    union data mydata;
    
    mydata.y = 'a';   // Assign value to the 'y' (char) member
    printf("mydata.y = %c\n", mydata.y);  // Prints 'a'

    mydata.x = 1;  // Assign value to the 'x' (int) member
    printf("mydata.x = %d\n", mydata.x);  // Prints 1
    
    // Accessing 'y' after assigning to 'x' will result in garbage because of the memory overlap
    printf("mydata.y = %c\n", mydata.y);  // Prints junk (garbage value)

    return 0;
}

