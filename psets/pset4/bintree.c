#include <stdio.h>
#include <stddef.h>  // For offsetof
#include <stdlib.h>  // For malloc, free
#include <string.h>  // For strcpy, strcmp

#include "bintree.h"

void _displayTree(Node* subtree, DISPLAY display){

    // if reached null, we return nothing, and just go back in the stack
    if (subtree == NULL) {
        return;
    }
    
    // traverse left if possible
    _displayTree(subtree->left, display);

    //print the item itself
    display(subtree->item);
    printf("->");

    _displayTree(subtree->right, display);
}

void displayTree(Node* subtree, DISPLAY display) {
    printf("Tree Display: \n");
    _displayTree(subtree, display);
    printf("\n");
}

void subtree_insert(Node* subtree, void* element, COMPARE compare){
    // Base case if the subtree is null, we go back in the stack 
    if (subtree == NULL) {
        return;
    }

	// we create the node itself using the element data passed
	Node* newnode = (Node*) malloc(sizeof(Node));
	newnode->item = element;

    int cmp = compare(newnode->item, subtree->item);

	if (cmp < 0) {
		// if less than we must go left, to insert left
		// if the left node exists, we must traverse there recursively
        // induction step
		if (subtree->left != NULL) {
			subtree_insert(subtree->left, newnode, compare);
		}
		// if the left not exists
		else {
            // this is the base case
			// if finally has no left, we insert here before it
			subtree_insert_before(subtree, newnode, compare);
		}
	} else {
		// now we must go right and find where to put it 
		if (cmp>0) {
			if (subtree->right != NULL){
                // induction step
				subtree_insert(subtree->right, newnode, compare);
			} else {
                printf("\npassou aqui\n");
                printf("\n%c\n", ((Element*)element)->key);
                printf("\npassou aqui\n");
				// the successor is here after no right node was found
                // base case 
				subtree_insert_after(subtree, newnode, compare);
			}
		}
		else {
			// they are equal, so just set tem equal to one another
            // or do nothing
			// subtree->item = newnode->item;
            return;
		}
	}	
}

//TODO tree free all nodes??
// traverse and go freeing them ??

void initializeTree(Node* tree, Element* element){
	tree->item = element;
	tree->parent = NULL;
	tree->left = NULL;
	tree->right = NULL;
}

Node* subtree_first(Node* subtree){
    // avoid dereferencing null pointer 
    if (subtree == NULL) return NULL;

	// Go left to return the most left node

	if (subtree->left) {
		// linear recursion, continue to go down 
		return subtree_first(subtree->left);
	} else {
		return subtree;
	}
}

Node* subtree_last(Node* subtree){
    // avoid dereferencing null pointer 
    if (subtree == NULL) return NULL;

	// Go right to return the most right node

	if (subtree->right) {
		// linear recursion, continue to go down 
		return subtree_last(subtree->right);
	} else {
		return subtree;
	}
}

void subtree_insert_before(Node* subtree, Node* newnode, COMPARE compare) {
    // avoid dereferencing null pointer 
    if (subtree == NULL) return;

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
    // avoid dereferencing null pointer 
    if (subtree == NULL) return;

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

Element* createElement(char key){
	Element* element = (Element*) malloc(sizeof(Element));
    // set the element key
    element->key = key;
	return element;
}

void displayElement(Element* element) {
    printf(" [%c] ", element->key);
}


int compareElement(Element* newnode, Element *node_ref){
    // -1 if e1 < e2
    // 0 if e1 == e2
    // +1 if e1 > e2 
    // return e1->key - e2->key;
    if (newnode->key < node_ref->key) {
        return -1;
    } else if (newnode->key == node_ref->key) {
        return 0;
    } else {
        return +1;
    }
}
