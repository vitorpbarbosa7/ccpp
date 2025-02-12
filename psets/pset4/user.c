#include <stdio.h>
#include "bintree.h"

int main() {
	Node* tree;

	Element* A = createElement('A');

	displayElement(A);
	// Element* B = createElement('B');
	// Element* C = createElement('C');

	// initializeTree(&tree);

	// subtree_insert(&tree, A, (COMPARE)compareElement);
	// subtree_insert(&tree, C, (COMPARE)compareElement);
	// subtree_insert(&tree, B, (COMPARE)compareElement);

	// displayTree(&tree, (DISPLAY)displayTree);


	free(A);
	// free(B);
	// free(C);
	// free(tree);
	
	return 0;
}
