#include <stdio.h>
#include "bintree.h"

int main() {

	Element* A = createElement('A');
	Element* B = createElement('B');
	Element* C = createElement('C');
	Element* D = createElement('D');
    
    // initialize tree
    Node* tree = createNode(B);

	// pointer to this kind of function, that is why cast is necessary
	displayTree(tree, (DISPLAY)displayElement);

	subtree_insert(tree, C, (COMPARE)compareElement);
	subtree_insert(tree, A, (COMPARE)compareElement);
    printf("\n\nInsert D now###################" );
	subtree_insert(tree, D, (COMPARE)compareElement);

	displayTree(tree, (DISPLAY)displayElement);

    freeTree(tree);
	
	return 0;
}
