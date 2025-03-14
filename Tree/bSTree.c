#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Define the structure for a node in the BST
typedef struct Node {
    int data;
    struct Node* left;
    struct Node* right;
} Node;

// Function to create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Function to insert a new node with given data
Node* insert(Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }

    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }

    return root;
}

// Function to search for a node with given data
bool search(Node* root, int data) {
    if (root == NULL) {
        return false;
    }

    if (root->data == data) {
        return true;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

// Function to perform inorder traversal of the BST
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

// Main function to demonstrate the BST operations
int main() {
    Node* root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal of the given tree:\n");
    inorder(root);
    printf("\n");

    printf("\nSearch for 40: %s\n", search(root, 40) ? "Found" : "Not Found");
    printf("Search for 90: %s\n", search(root, 90) ? "Found" : "Not Found");

    return 0;
}