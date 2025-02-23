#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
  char name[10];
  uint8_t age;
  uint8_t height;
};

void createPerson(char name[], uint8_t age, uint8_t height,
                  // Expects a pointer to a function
                  // It is like a callable in python
                  void (*function_pointer)(struct Person)) {
  struct Person person;
  strcpy(person.name, "Neumann");
  person.age = 35;
  person.height = 170;

  (*function_pointer)(person);
}

void printPerson(struct Person person) {
  printf("Person: %s %d %d\n", person.name, person.age, person.height);
}

void printPerson2(struct Person person) {
  printf("Person: name: %s, age: %d, height: %d\n", person.name, person.age,
         person.height);
}

int main() {
  // callable, callback
  // createPerson is a high order function
  // functional programming
  createPerson("Neumann", 35, 170, &printPerson);
  // same signature (return type and input types)
  createPerson("Neumann", 35, 170, &printPerson2);

  return 0;
}
