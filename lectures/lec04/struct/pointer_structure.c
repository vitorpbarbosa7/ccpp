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
    Person* ptrPerson;
    ptrPerson = (Person*)malloc(sizeof(Person));
    ptrPerson->firstName = (char*)malloc(strlen("Emily")+1);
    strcpy(ptrPerson->firstName,"Emily");
    ptrPerson->age = 23;

    printf("Name: %s, Age: %d", ptrPerson->firstName, ptrPerson->age);
}
