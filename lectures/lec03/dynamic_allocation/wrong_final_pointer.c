#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* name = (char*) malloc(strlen("Susan")+1);

    // the formatter knows how to do it, don't forget about 
    // this abstraction made for you
    printf("Initial string: %s\n", name);

    strcpy(name, "Susan");
    // initially this guy points to the beginning
    // but the pointer will move in memory here
    while(*name != 0) {
        printf("%c", *name);
        // but here the crap
        // the pointer itself moves, this is funny
        // so it will start to point to another locations
        // is not like an array which keeps only pointing to the 
        // same first location
        name++;
    }
    
    // the formatter knows how to do it, don't forget about 
    // this abstraction made for you
    printf("Final string: %s", name);
}

