#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIST_SIZE 10

typedef struct _person {
    char* firstName;
    char* lastName;
    char* title;
    unsigned int age;
} Person;

// List of available Person objects (our pool)
Person* list[LIST_SIZE];

// Function to initialize the list (set all elements to NULL)
void initializeList() {
    for (int i = 0; i < LIST_SIZE; i++) {
        list[i] = NULL;
    }
}

// Function to initialize a Person structure
void initializePerson(Person* person, const char* fn, const char* ln, const char* title, unsigned int age) {
    person->firstName = (char*)malloc(strlen(fn) + 1);
    strcpy(person->firstName, fn);

    person->lastName = (char*)malloc(strlen(ln) + 1);
    strcpy(person->lastName, ln);

    person->title = (char*)malloc(strlen(title) + 1);
    strcpy(person->title, title);

    person->age = age;
}

// Function to deallocate memory for a Person's fields
void deallocatePerson(Person* person) {
    free(person->firstName);
    free(person->lastName);
    free(person->title);
}

// Function to get a Person from the pool or allocate a new one if none are available
Person* getPerson() {
    for (int i = 0; i < LIST_SIZE; i++) {
        if (list[i] != NULL) {
            Person* ptr = list[i];
            list[i] = NULL; // Remove from the pool
            return ptr;
        }
    }
    // If no person is available in the pool, allocate a new one
    return (Person*)malloc(sizeof(Person));
}

// Function to return a Person to the pool, or free it if the pool is full
Person* returnPerson(Person* person) {
    for (int i = 0; i < LIST_SIZE; i++) {
        if (list[i] == NULL) {
            list[i] = person;  // Add to the pool
            return person;
        }
    }
    // If the pool is full, deallocate the person and return NULL
    deallocatePerson(person);
    free(person);
    return NULL;
}

// Function to display a Person's information
void displayPerson(Person* person) {
    printf("Name: %s %s\n", person->firstName, person->lastName);
    printf("Title: %s, Age: %u\n", person->title, person->age);
}

void processPerson() {
    // Declare a pointer for the person
    Person* ptrPerson;

    // Get a person from the pool (or allocate a new one)
    ptrPerson = getPerson();

    // Initialize the person's fields
    initializePerson(ptrPerson, "Ralph", "Fitzgerald", "Manager", 35);

    // Display the person's information
    displayPerson(ptrPerson);

    // Return the person to the pool
    returnPerson(ptrPerson);
}

int main() {
    // Initialize the pool
    initializeList();

    // Process a person
    processPerson();

    return 0;
}

