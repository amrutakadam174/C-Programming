//Tree Traversals (Inorder, Preorder, Postorder)

#include <stdio.h>
#include <stdlib.h>

// Define structure for a binary tree node
struct Node {
    int data;                    // Data stored in the node
    struct Node *left, *right;  // Pointers to left and right child nodes
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*) malloc(sizeof(struct Node));  // Allocate memory
    node->data = data;           // Set the data
    node->left = NULL;           // Initialize left child as NULL
    node->right = NULL;          // Initialize right child as NULL
    return node;                 // Return the newly created node
}

// Inorder Traversal: Left → Root → Right
void inorder(struct Node* root) {
    if (root != NULL) {
        inorder(root->left);             // Traverse left subtree
        printf("%d ", root->data);       // Visit root
        inorder(root->right);            // Traverse right subtree
    }
}

// Preorder Traversal: Root → Left → Right
void preorder(struct Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);       // Visit root
        preorder(root->left);            // Traverse left subtree
        preorder(root->right);           // Traverse right subtree
    }
}

// Postorder Traversal: Left → Right → Root
void postorder(struct Node* root) {
    if (root != NULL) {
        postorder(root->left);           // Traverse left subtree
        postorder(root->right);          // Traverse right subtree
        printf("%d ", root->data);       // Visit root
    }
}

int main() {
    // Create a sample binary tree
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    // Display different tree traversals
    printf("Inorder: ");
    inorder(root);     // Output: 4 2 5 1 3
    printf("\nPreorder: ");
    preorder(root);    // Output: 1 2 4 5 3
    printf("\nPostorder: ");
    postorder(root);   // Output: 4 5 2 3 1

    return 0;  // End of program
}

/*
 Create nodes and build the tree:
               1
              / \
             2   3
            / \
           4   5


Inorder: 4 2 5 1 3
Preorder: 1 2 4 5 3
Postorder: 4 5 2 3 1

*/