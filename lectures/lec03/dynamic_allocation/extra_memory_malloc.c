#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int UPPER_LIMIT = 20;
    char* pc = (char*) malloc(6);
    for(int i=0; i<UPPER_LIMIT; i++) {
        *(pc+i) = '0';
//        pc[i] = '0';
    }

    for(int i=0; i<UPPER_LIMIT; i++) {
        printf("%c ", *(pc+i));
        //printf("%c ", pc[i]);
    }
    return 0;
}
