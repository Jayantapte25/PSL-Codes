#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int data;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode *createNode(int data);
struct TreeNode *insert(struct TreeNode *root, int data);
void displayInorder(struct TreeNode *root);
void displayPreorder(struct TreeNode *root);
void displayPostorder(struct TreeNode *root);
struct TreeNode *search(struct TreeNode *root, int data);
struct TreeNode *delete1(struct TreeNode *root, int data);

int main()
{
    struct TreeNode *root = NULL;
    int choice, data;

    while (1) {
        printf("Binary Tree Menu:\n");
        printf("1. Insert\n");
        printf("2. Inorder Traversal\n");
        printf("3. Preorder Traversal\n");
        printf("4. Postorder Traversal\n");
        printf("5. Search\n");
        printf("6. delete1\n");
        printf("7. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                root = insert(root, data);
                break;
            case 2:
                printf("Inorder Traversal: ");
                displayInorder(root);
                printf("\n");
                break;
            case 3:
                printf("Preorder Traversal: ");
                displayPreorder(root);
                printf("\n");
                break;
            case 4:
                printf("Postorder Traversal: ");
                displayPostorder(root);
                printf("\n");
                break;
            case 5:
                printf("Enter data to search: ");
                scanf("%d", &data);
                if (search(root, data) != NULL) {
                    printf("Data found in the tree.\n");
                } else {
                    printf("Data not found in the tree.\n");
                }
                break;
            case 6:
                printf("Enter data to delete1: ");
                scanf("%d", &data);
                root = delete1(root, data);
                break;
            case 7:
                exit(0);
            default:
                printf("Invalid choice!\n");
        }
    }
    return 0;
}

struct TreeNode *createNode(int data) {
    struct TreeNode *newNode = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

struct TreeNode *insert(struct TreeNode *root, int data)
{
    if (root == NULL)
    {
        return createNode(data);
    }
    if (data < root->data)
    {
        root->left = insert(root->left, data);        
    }
    else if (data > root->data)
    {
        root->right = insert(root->right, data);
    }
    return root;
}

void displayInorder(struct TreeNode *root) {
    if (root != NULL) {
        displayInorder(root->left);
        printf("%d ", root->data);
        displayInorder(root->right);
    }
}

void displayPreorder(struct TreeNode *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        displayPreorder(root->left);
        displayPreorder(root->right);
    }
}

void displayPostorder(struct TreeNode *root) {
    if (root != NULL) {
        displayPostorder(root->left);
        displayPostorder(root->right);
        printf("%d ", root->data);
    }
}

struct TreeNode *search(struct TreeNode *root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

struct TreeNode *findMin(struct TreeNode *node) {
    struct TreeNode *current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct TreeNode *delete1(struct TreeNode *root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = delete1(root->left, data);
    } else if (data > root->data) {
        root->right = delete1(root->right, data);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            struct TreeNode *temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct TreeNode *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children, get the in-order successor (smallest in the right subtree)
        struct TreeNode *temp = findMin(root->right);

        // Copy the in-order successor's content to this node
        root->data = temp->data;

        // delete1 the in-order successor
        root->right = delete1(root->right, temp->data);
    }

    return root;
}
