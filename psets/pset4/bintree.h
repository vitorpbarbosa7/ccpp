#ifndef BINTREE_H
#define BINTREE_H

#include <stdio.h>
#include <stddef.h>  // For offsetof
#include <stdlib.h>  // For malloc, free
#include <string.h>  // For strcpy, strcmp

// Define the Element structure
typedef struct _element {
    char key;
} Element;

// Define the Node structure
typedef struct _node {
    void *item;
    struct _node* parent;
    struct _node* left;
    struct _node* right;
} Node;

// Define function pointer types for display and compare functions
typedef void (*DISPLAY)(void*);
typedef int (*COMPARE)(void*, void*);

void displayElement(Element* element);
// Function prototypes
Element* createElement(char key);
int compareElement(Element* e1, Element *e2);

void initializeTree(Node* tree, Element* element);
Node* subtree_first(Node* subtree);
Node* subtree_last(Node* subtree);
void subtree_insert_before(Node* subtree, Node* newnode, COMPARE compare);
void subtree_insert_after(Node* subtree, Node* newnode, COMPARE compare);
void subtree_insert(Node* subtree, void* element, COMPARE compare);
void displayTree(Node* subtree, DISPLAY display);

#endif // BINTREE_H
