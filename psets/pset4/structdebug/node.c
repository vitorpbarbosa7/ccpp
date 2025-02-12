#include <stdio.h>
#include <stdlib.h>

struct Node {
    int value;
    struct Node* right;
};

int main() {
    // Creating three nodes dynamically
    struct Node* root = (struct Node*)malloc(sizeof(struct Node));  // Root node
    struct Node* node2 = (struct Node*)malloc(sizeof(struct Node));  // Second node
    struct Node* node3 = (struct Node*)malloc(sizeof(struct Node));  // Third node

    // Assigning values to each node
    root->value = 1;
    node2->value = 2;
    node3->value = 3;

    // Linking nodes: right -> right -> right
    root->right = node2;
    node2->right = node3;
    node3->right = NULL;  // Last node has no right child

    // Printing the values from the root, moving right at each step
    struct Node* current = root;
    while (current != NULL) {
        printf("Node value: %d\n", current->value);
        current = current->right;  // Move to the next node in the chain
    }

    // Freeing the allocated memory
    free(root);
    free(node2);
    free(node3);

    return 0;
}


