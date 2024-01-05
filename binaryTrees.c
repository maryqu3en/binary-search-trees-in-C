#include "binaryTrees.h"

// Function to create a new tree node
treeNode* createNode(int data) {
    treeNode* newNode = (treeNode*)malloc(sizeof(treeNode));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Binary search tree function to insert a new node
treeNode* insert(treeNode* root, int data) {
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

// Inorder traversal of the binary tree
void inorderTraversal(treeNode* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

// Preorder traversal of the binary tree
void preorderTraversal(treeNode* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Postorder traversal of the binary tree
void postorderTraversal(treeNode* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        printf("%d ", root->data);
    }
}

// Function to search for a node with a specific value
treeNode* search(treeNode* root, int data) {
    if (root == NULL || root->data == data) {
        return root;
    }

    if (data < root->data) {
        return search(root->left, data);
    } else {
        return search(root->right, data);
    }
}

// Function to calculate the height of the binary tree
int height(treeNode* root) {
    if (root == NULL) {
        return 0;
    }

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return (leftHeight > rightHeight) ? (leftHeight + 1) : (rightHeight + 1);
}

// Helper function to find the minimum value node in a BST
treeNode* findMin(treeNode* root) {
    while (root->left != NULL) {
        root = root->left;
    }
    return root;
}

// Helper function to find the maximum value node in a BST
treeNode* findMax(treeNode* root) {
    while (root->right != NULL) {
        root = root->right;
    }
    return root;
}

// Function to check if a binary tree is a Binary Search Tree (BST)
int isBST(treeNode* root) {
    if (root == NULL)
        return 1;
    
    if (root->left != NULL && root->left->data >= root->data)
        return 0;
    
    if (root->right != NULL && root->right->data <= root->data)
        return 0;
        
    return isBST(root->left) && isBST(root->right);
}

// Helper function to find the successor of a node in a BST
treeNode* getSuccessor(treeNode* root, int data) {
    treeNode* current = search(root, data);

    if (current == NULL) {
        return NULL;
    }

    // Case 1: Node has a right subtree
    if (current->right != NULL) {
        return findMin(current->right);
    }

    // Case 2: Node doesn't have a right subtree
    treeNode* successor = NULL;
    treeNode* ancestor = root;

    while (ancestor != current) {
        if (current->data < ancestor->data) {
            successor = ancestor; // Current node is on the left
            ancestor = ancestor->left;
        } else {
            ancestor = ancestor->right;
        }
    }

    return successor;
}

// Helper function to find the predecessor of a node in a BST
treeNode* getPredecessor(treeNode* root, int data) {
    treeNode* current = search(root, data);

    if (current == NULL) {
        return NULL;
    }

    // Case 1: Node has a left subtree
    if (current->left != NULL) {
        return findMax(current->left);
    }

    // Case 2: Node doesn't have a left subtree
    treeNode* predecessor = NULL;
    treeNode* ancestor = root;

    while (ancestor != current) {
        if (current->data > ancestor->data) {
            predecessor = ancestor; // Current node is on the right
            ancestor = ancestor->right;
        } else {
            ancestor = ancestor->left;
        }
    }

    return predecessor;
}

// Function to delete a node with a specific value from a BST
treeNode* delete(treeNode* root, int data) {
    if (root == NULL) {
        return root;
    }

    if (data < root->data) {
        root->left = delete(root->left, data);
    } else if (data > root->data) {
        root->right = delete(root->right, data);
    } else {
        // Node with only one child or no child
        if (root->left == NULL) {
            treeNode* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            treeNode* temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest
        // in the right subtree) or predecessor (largest in the left subtree)
        treeNode* temp = findMin(root->right);
        root->data = temp->data;
        root->right = delete(root->right, temp->data);
    }

    return root;
}

// Function to check if two binary trees are identical
int isIdentical(treeNode* root1, treeNode* root2) {
    if (root1 == NULL && root2 == NULL) {
        return 1; // Both trees are empty, so they are identical
    }

    if (root1 != NULL && root2 != NULL) {
        // Check the data, left subtree, and right subtree
        return (root1->data == root2->data) &&
               isIdentical(root1->left, root2->left) &&
               isIdentical(root1->right, root2->right);
    }

    return 0; // One tree is empty, and the other is not, so they are not identical
}

// Function to print the leaf nodes of a binary tree
void printLeafNodes(treeNode* root) {
    if (root == NULL) {
        return;
    }

    if (root->left == NULL && root->right == NULL) {
        printf("%d ", root->data);
        return;
    }

    printLeafNodes(root->left);
    printLeafNodes(root->right);
}


treeNode* sortedArrayToBST(int arr[], int start, int end) {
    if (start > end) {
        return NULL;
    }

    int mid = (start + end) / 2;
    treeNode* node = (treeNode*)malloc(sizeof(treeNode));

    node->data = arr[mid];
    node->left = sortedArrayToBST(arr, start, mid - 1);
    node->right = sortedArrayToBST(arr, mid + 1, end);

    return node;
}