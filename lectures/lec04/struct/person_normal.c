#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
} Person;

int main() {
    Person person;
    
    // pointer to region on the Heap
    person.firstName = (char*)malloc(strlen("Emily")+1);
    strcpy(person.firstName, "Emily");
    // not pointer
    person.age = 23;

    printf("Name: %s, Age: %d\n", person.firstName, person.age);
}




