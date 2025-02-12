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

Node* subtree_first(Node* subtree){
	// Go left to return the most left node

	if (subtree->left) {
		// linear recursion, continue to go down 
		return subtree_first(subtree->left);
	} else {
		return subtree;
	}
}

Node* subtree_last(Node* subtree){
	// Go right to return the most right node

	if (subtree->right) {
		// linear recursion, continue to go down 
		return subtree_last(subtree->right);
	} else {
		return subtree;
	}
}

void subtree_insert_before(Node* subtree, Node* newnode, COMPARE compare) {

	// if it has a left, must find the right most node, and put 
	// if it has no left, therefore we can find the right most node and insert there 
	// the new node there
	if (subtree->left != NULL) {
		Node* rightMostNode;
		rightMostNode = subtree_last(subtree->left);
		rightMostNode->right = newnode; 
		newnode->parent = rightMostNode;
	} else {
		// if it really has no left, so we just put it here in the left part
		subtree->left = newnode;
		newnode->parent =subtree; 
	}

}
void subtree_insert_after(Node* subtree, Node* newnode, COMPARE compare) {
	if (subtree->right != NULL){
		// must find the first node after this subtree node
		Node* leftMostNode;
		leftMostNode = subtree_first(subtree->right);
		leftMostNode->left = newnode;
		newnode->parent = leftMostNode;
	} else {
		// if it has no right, therefore is the case where we can insert it 
		// directly here in the right
		subtree->right = newnode;
		newnode->parent = subtree;
	}	
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
			// if finally has no left, we insert here before it
			subtree_insert_before(subtree, newnode, compare);
		}
	} else {
		// now we must go right and find where to put it 
		if (compare(newnode->item, subtree->item)) {
			if (subtree->right != NULL){
				subtree_insert(subtree, newnode, compare);
			} else {
				// the successor is here after no right node was found
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
