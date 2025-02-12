#include <stdio.h>
#include "bintree.h"

int main() {
	Node tree;

	Element* A = createElement('A');
	Element* B = createElement('B');
	Element* C = createElement('C');

	initializeTree(&tree);
	
	// pointer to this kind of function, that is why cast is necessary
	displayTree(&tree, (DISPLAY)displayElement);

	subtree_insert(&tree, A, (COMPARE)compareElement);
	// subtree_insert(&tree, C, (COMPARE)compareElement);
	// subtree_insert(&tree, B, (COMPARE)compareElement);

	displayTree(&tree, (DISPLAY)displayElement);


	free(A);
	// free(B);
	// free(C);
	// free(tree);
	
	return 0;
}
