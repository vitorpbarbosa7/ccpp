#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Class struct

// pointer back to itself
// why pointer to Class? to the same data Classure that store attributes

Class Person {
  char name[10];
  uint8_t age;
  uint8_t height;
  // pointer to the function (will be show)
  // input type is pointer to a Class Person
  void (*show)(Class Person *);
};

void person_print(Class Person *self) {
  printf("Person: name: %s, age: %d, height: %d\n", self->name, self->age,
         self->height);
}

// conClassor
// return type? the pointer to the Class Person
Class Person *createPerson(char name[], uint8_t age, uint8_t height) {
  // the Class itself
  // the conClassor creates and returns the Class we need as the self
  Class Person *self = (Class Person *)malloc(sizeof(Class Person));
  strcpy(self->name, name);
  self->age = age;
  self->height = height;

  // for this, is like __str__ in python
  self->show = &person_print;

  return self;
}

int main() {
  // we have two Classs
  // one to create and receive the arguments
  // to create another Class and return this other Class
  Class Person *myperson;
  myperson = (Class Person *)createPerson("Neumann", 35, 170);
  // person has the print show method
  // show itself needs some argument, and this is
  // the this or self itself
  myperson->show(myperson);

  return 0;
}
