#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// pointer back to itself
// why pointer to struct? to the same data structure that store attributes

struct Person {
  char name[10];
  uint8_t age;
  uint8_t height;
  // pointer to the function (will be show)
  // input type is pointer to a struct Person
  void (*show)(struct Person *);
};

void person_print(struct Person *self) {
  printf("Person: name: %s, age: %d, height: %d\n", self->name, self->age,
         self->height);
}

// constructor
// return type? the pointer to the struct Person
struct Person *createPerson(char name[], uint8_t age, uint8_t height) {
  // the struct itself
  // the constructor creates and returns the struct we need as the self
  struct Person *self = (struct Person *)malloc(sizeof(struct Person));
  strcpy(self->name, name);
  self->age = age;
  self->height = height;

  // for this, is like __str__ in python
  self->show = &person_print;

  return self;
}

int main() {
  // we have two structs
  // one to create and receive the arguments
  // to create another struct and return this other struct
  struct Person *myperson;
  myperson = (struct Person *)createPerson("Neumann", 35, 170);
  // person has the print show method
  // show itself needs some argument, and this is
  // the this or self itself
  myperson->show(myperson);

  return 0;
}
