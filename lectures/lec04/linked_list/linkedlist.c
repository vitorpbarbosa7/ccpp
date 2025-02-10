#include <stdio.h>
#include <stdlib.h>
#include "string.h"

typedef struct _employee{
    char name[32];
    unsigned char age;
} Employee;

int compareEmployee(Employee *e1, Employee *e2) {
    return strcmp(e1->name, e2->name);
}

void displayEmployee(Employee* employee) { 
    printf("%s\t%d\n", employee->name, employee->age);
}

typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*, void*);

typedef struct _node {
    void *data;
    struct _node *next;
} Node;

typedef struct _linkedlist {
    Node *head;
    Node *tail;
    Node *current;
} LinkedList;

void initializeList(LinkedList* list) {
    //Initializes the linked list
    list->head = NULL;
    list->tail = NULL;
    list->current = NULL;
    }

// pointer to some generic type, so void*
void addHead(LinkedList* list, void* data) {
    //Adds data to the linked list’s head
    // initialize the node data type to add it here
    Node *node = (Node*) malloc(sizeof(Node));
    node->data = data;
    // if the list has no head
    if (list->head == NULL) {
        // the tail and the head will be the same
        list->tail = node;
        node->next = NULL;
    // if it has a head
    // this node will be the head, and will point to the previous head
    } else {
        node->next = list->head;
    }
    // anyway this list head will be this node
    list->head = node;
}
/*
void addTail(LinkedList*, void*) //Adds data to the linked list’s tail
void delete(LinkedList*, Node*) //Removes a node from the linked list
Node *getNode(LinkedList*, COMPARE, void*) //Returns a pointer to the node containing a specific data item
*/

void displayLinkedList(LinkedList* list, DISPLAY display) {
    //traversing the linked list
    
    //Displays the linked list
    printf("\n Linked List \n");
    // start with head 
    Node* current = list->head;
    while (current != NULL) {
        // display first
        display(current->data);
        // go to next
        current = current->next;
    }
}

int main() {
    LinkedList linkedList;

	Employee* samuel = (Employee*) malloc(sizeof(Employee));
	strcpy(samuel->name, "Samuel");
	samuel->age = 32;
	Employee* sally = (Employee*) malloc(sizeof(Employee));
	strcpy(sally->name, "Sally");
	sally->age = 28;
	Employee* susan = (Employee*) malloc(sizeof(Employee));
	strcpy(susan->name, "Susan");
	susan->age = 45;
    
    // pass a pointer to the linkedlist
    initializeList(&linkedList);

    addHead(&linkedList, samuel);
    addHead(&linkedList, sally);
    addHead(&linkedList, susan);

    displayLinkedList(&linkedList, (DISPLAY)displayEmployee);

    return 0;
}


