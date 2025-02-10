#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef unsigned int uint;

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    uint age;
} Person;

// Function to initialize a Person instance
void initializePerson(Person* person, const char* fn, const char* ln, const char* title, uint age) {
    // Dynamically allocate memory for the first name
    person->firstName = (char*) malloc(strlen(fn) + 1);
    strcpy(person->firstName, fn);

    // Dynamically allocate memory for the last name
    person->lastName = (char*) malloc(strlen(ln) + 1);
    strcpy(person->lastName, ln);

    // Dynamically allocate memory for the title
    person->title = (char*) malloc(strlen(title) + 1);
    strcpy(person->title, title);

    // Assign the age value
    person->age = age;
}

// Function to deallocate memory for the Person instance
void deallocatePerson(Person* person) {
    // Free the dynamically allocated memory for the strings
    free(person->firstName);
    free(person->lastName);
    free(person->title);
}

// Function to process a person
void processPerson() {
    // Declare a person instance
    Person person;

    // Initialize the person with values
    initializePerson(&person, "Peter", "Underwood", "Manager", 36);

    // Print the person's details
    printf("Name: %s %s\n", person.firstName, person.lastName);
    printf("Title: %s, Age: %u\n", person.title, person.age);

    // Deallocate the memory before the function exits
    deallocatePerson(&person);
}

int main() {
    // Process the person
    processPerson();

    return 0;
}

