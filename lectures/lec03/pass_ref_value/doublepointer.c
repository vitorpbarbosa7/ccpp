#include "myprint.h"

int main() {
    // Array of strings (array of pointers to char)
    char *titles[] = {
        "The Great Gatsby",
        "1984",
        "To Kill a Mockingbird",
        "Moby-Dick"
    };
    
    // same datatype, confusion is because [] and {} 
    // help define size a priori
    char **ptr = titles;

    // modify first element
    // access memory location
    ptr[0] = "Another Book";
    
    // Modify some letter;
    //ptr[3][4] = 'X';


    // look through memory locations
    for (int i=0;i<4;i++){
        myprint(*ptr);
        ptr++;
    }

    return 0;
}

