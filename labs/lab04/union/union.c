#include <stdio.h>
#include <stdlib.h>


typedef union {
    int i;
    unsigned char bytes[4];
} IntBytes;

int main() {
    IntBytes data;
    data.i = 0x12345678;

    for (int i=0; i<4; i++) {
        // pointing to the same memory region 
        printf("Byte %d: 0x%x\n", i, data.bytes[i]);
    }
    
    return 0;
}
