//find the lowest common ancestor of two nodes in a binary search tree:

#include <iostream>
#include <cstdlib> // Include the <cstdlib> header for the 'exit' function
using namespace std;

int p, q;

// Define the TreeNode structure
struct TreeNode {
    int data;
    struct TreeNode* right;
    struct TreeNode* left;
    struct TreeNode* prev;
};

// Function to create a new TreeNode
struct TreeNode* create(int data) {
    struct TreeNode* newnode = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    newnode->data = data;
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->prev = NULL;
    return newnode;
}

// Function to insert a new node into the BST
struct TreeNode* insert(struct TreeNode* root, int data) {
    if (root == NULL) {
        return create(data); // Create a new node when reaching an empty spot
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
        root->left->prev = root; // Set the backward link
    }
    else if (data > root->data) {
        root->right = insert(root->right, data);
        root->right->prev = root; // Set the backward link
    }
    return root;
}

// Function to find node with value 'p'
struct TreeNode* findP(struct TreeNode* root, int p) {
    if (root == NULL || root->data == p) {
        return root; // Found 'p' or reached the end of the tree
    }
    if (p < root->data) {
        return findP(root->left, p);
    }
    else {
        return findP(root->right, p);
    }
}

// Function to find node with value 'q'
struct TreeNode* findQ(struct TreeNode* root, int q) {
    if (root == NULL || root->data == q) {
        return root; //Found 'q' or reached the end of the tree
    }
    if (q < root->data) {
        return findQ(root->left, q);
    }
    else {
        return findQ(root->right, q);
    }
}

int main() {
    struct TreeNode* root = NULL;
    int choice; // Declare 'choice' to take user input for menu

    cout << "Enter the choice" << endl;
    cin >> choice; // Fix variable name to match declaration

    while (1) {
        switch (choice) {
            case 1:
                int value; // Declare 'value' to take user input for insertion
                cout << "Enter the value to be inserted" << endl;
                cin >> value;
                root = insert(root, value);
                break;
            case 2:
                // Update 'start' to 'findQ' for deletion
                cout << "Enter the value to be deleted" << endl;
                cin >> q; // Fix variable name to match declaration
                root = insert(root, q);
                break;
            case 3:
                exit(0); // Exit the program
            default:
                cout << "Enter the correct choice" << endl;
                break;
        }
    }

    struct TreeNode* paas = findP(root, p);
    struct TreeNode* qaas = findQ(root, q);

    int i = 0, s[100], k[100];
    struct TreeNode* tmp;
    tmp = paas;
    while (tmp != root) {
        s[i] = tmp->data;
        tmp = tmp->prev;
        i++;
    }
    tmp = qaas;
    i = 0;
    while (tmp != root) {
        k[i] = tmp->data;
        tmp = tmp->prev;
        i++;
    }
    for (int j = 0; j < i; j++) {
        if (s[j] == k[j]) {
            cout << s[j] << endl;
        }
    }
    return 0;
}
