#include <stdio.h>
#include "bintree.h"

int main() {
	Node tree;

	Element* A = createElement('A');
	Element* B = createElement('B');
	Element* C = createElement('C');

	initializeTree(&tree);

	subtree_insert(&tree, A, compareElement);
	subtree_insert(&tree, C, compareElement);
	subtree_insert(&tree, B, compareElement);

	displayTree(&tree);




	





	return 0;
}
