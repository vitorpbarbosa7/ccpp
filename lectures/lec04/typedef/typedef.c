#include <stdio.h>
#include <stdlib.h>

// Define a typedef for a basic type
typedef int seconds_t; // 'seconds_t' is now an alias for 'int'

// Define a typedef for a structure (this is an opaque type example)
typedef struct person person; // Just a forward declaration, the definition is hidden

// Define the structure elsewhere, with its internal details
struct person {
    char* name;
    unsigned int age;
};

// Function that uses the typedefed pointer type 'person'
int func(person* me) {
    // Accessing the fields of person (since it's a pointer)
    printf("Name: %s, Age: %u\n", me->name, me->age);
    return 0;
}

int main() {
    // Using the typedef for the basic type
    seconds_t time_in_seconds = 3600; // 'seconds_t' is treated as an 'int'
    printf("Time: %d seconds\n", time_in_seconds);

    // Using the typedef for the structure
    person* frank = (person*)malloc(sizeof(struct person)); // 'person' is now a pointer to 'struct person'
    frank->name = "Frank";
    frank->age = 30;

    // Call function with the typedefed pointer
    func(frank);

    // Free the memory allocated for the 'person' struct
    free(frank);

    return 0;
}

