#include <stdio.h>
#include "bintree.h"

int main() {
	Node* tree = (Node*) malloc(sizeof(Node));

	Element* A = createElement('A');
	Element* B = createElement('B');
	Element* C = createElement('C');

	initializeTree(tree, B);
	
	// pointer to this kind of function, that is why cast is necessary
	displayTree(tree, (DISPLAY)displayElement);

	subtree_insert(tree, C, (COMPARE)compareElement);
	subtree_insert(tree, A, (COMPARE)compareElement);

	displayTree(tree, (DISPLAY)displayElement);

	printf("\npor aqui\n ");
	displayElement(tree->item);
	displayElement(tree->left->item);
	displayElement(tree->right->item);


	free(A);
	// free(B);
	// free(C);
	// free(tree);
	
	return 0;
}
