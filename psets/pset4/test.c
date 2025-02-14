#include <stdio.h>
#include "bintree.h"

int main() {

    Element* A = createElement('A');
    Element* B = createElement('B');
    Element* C = createElement('C');
    Element* D = createElement('D');
    Element* E = createElement('E');
    Element* F = createElement('F');
    Element* G = createElement('G');
    Element* H = createElement('H');
    Element* I = createElement('I');
    Element* J = createElement('J');

    createNode(tree, B);

    // Display the tree after initializing with B
    displayTree(tree, (DISPLAY)displayElement);

    // Insert elements in random order
    printf("\n\nInsert C now###################\n");
    subtree_insert(tree, C, (COMPARE)compareElement);
    
    printf("\n\nInsert A now###################\n");
    subtree_insert(tree, A, (COMPARE)compareElement);

    printf("\n\nInsert F now###################\n");
    subtree_insert(tree, F, (COMPARE)compareElement);

    printf("\n\nInsert E now###################\n");
    subtree_insert(tree, E, (COMPARE)compareElement);

    printf("\n\nInsert G now###################\n");
    subtree_insert(tree, G, (COMPARE)compareElement);

    printf("\n\nInsert D now###################\n");
    subtree_insert(tree, D, (COMPARE)compareElement);

    printf("\n\nInsert H now###################\n");
    subtree_insert(tree, H, (COMPARE)compareElement);

    printf("\n\nInsert I now###################\n");
    subtree_insert(tree, I, (COMPARE)compareElement);

    printf("\n\nInsert J now###################\n");
    subtree_insert(tree, J, (COMPARE)compareElement);

    // Final display of the tree after all insertions
    displayTree(tree, (DISPLAY)displayElement);

    // Free allocated memory for elements (don't forget to free the tree itself as well)
    free(A);
    free(B);
    free(C);
    free(D);
    free(E);
    free(F);
    free(G);
    free(H);
    free(I);
    free(J);
    free(tree);
    
    return 0;
}

