#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
} Person;

void initializePerson(
    Person* person,
    const char* fn,
    const char* ln, 
    const char* title,
    unsigned int age) {
    person->firstName = (char*) malloc(strlen(fn)+1);
    strcpy(person->firstName, fn);
    person->lastName = (char*) malloc(strlen(ln)+1);
    strcpy(person->lastName, ln);
    person->title = (char*) malloc(strlen(title)+1);
    strcpy(person->title, title);
    person->age=age;
}

int main() {
    Person person;
    initializePerson(&person, "Mary", "Jane", "Student", 22);

    printf("Name: %s, Age: %d\n", person.firstName, person.age);
    return 0;
}
