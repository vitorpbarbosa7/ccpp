#include <stdio.h>
#include "bintree.h"


typedef struct _element{
	char key;
} Element;

int compareElement(Element* e1, Element *e2){
	// 1
	return strcmp(e1->key, e2->key);
}

typedef void(*DISPLAY)(void*);
typedef int(*COMPARE)(void*, void*);


Element* createElement(char key){
	Element* element = (Element*) malloc(sizeof(Element));
	strcpy(element->key, key);
	return element;
}

typedef struct _node {
	void *item;
	struct _node *parent;
	struct _node *left;
	struct _node *right;
} Node;

void initializeTree(Node* tree){
	tree->item = NULL;
	tree->parent = NULL;
	tree->left = NULL;
	tree->right = NULL;
}

void subtree_insert_before(Node* subtree, Node* newnode, COMPARE compare) {
	//TODO

	// if it has a left, must find the right most node, and put 
	// the new node there
	if (subtree->left != NULL) {
		Node* rightMostNode;
		rightMostNode = subtree_last(subtree->left);
		rightMostNode->right->right = newnode; 
		newnode->parent = rightMostNode;
	} else {
		// if it really has no left, so we just put it here in the left part
		subtree->left = newnode;
		newnode->parent =subtree; 
	}

}
void subtree_insert_after(Node* subtree, Node* newnode, COMPARE compare) {
	//TODO
}



void subtree_insert(Node* subtree, void* element, COMPARE compare){
	// we create the node itself using the element data passed
	Node* newnode = (Node*) malloc(sizeof(Node));
	newnode->item = element;

	if (compare(newnode->item, subtree->item)) {
		// if less than we must go left, to insert left
		// if the left node exists, we must traverse there recursively
		if (subtree->left != NULL) {
			subtree_insert(subtree, newnode, compare);
		}
		// if the left not exists
		else {
			// the predecessor might be going up and after down in a right subtree
			subtree_insert_before(subtree, newnode, compare);
		}
	} else {
		// now we must go right and find where to put it 
		if (compare(newnode->item, subtree->item)) {
			if (subtree->right != NULL){
				subtree_insert(subtree, newnode, compare);
			} else {
				// the successor might be going down and left
				subtree_insert_after(subtree, newnode, compare);
			}
		}
		else {
			// they are equal, so just set tem equal to one another
			subtree->item = newnode->item;
		}


	}

		
	} 

	}



}



int main() {
	Node tree;

	Element* A = createElement('A');
	Element* B = createElement('B');
	Element* C = createElement('C');

	initializeTree(&tree);

	addNode(&tree, B);





	return 0;
}
