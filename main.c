#include "binaryTrees.h"
#include <assert.h>

int main() {
    // Create a root node
    treeNode* root = createNode(10);
    assert(root != NULL);
    assert(root->data == 10);

    // Insert new nodes
    root = insert(root, 5);
    root = insert(root, 15);
    assert(root->left->data == 5);
    assert(root->right->data == 15);

    // Insert more nodes
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 13);
    root = insert(root, 17);
    assert(root->left->left->data == 3);
    assert(root->left->right->data == 7);
    assert(root->right->left->data == 13);
    assert(root->right->right->data == 17);

    // Perform inorder traversal and check the output manually
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    // Perform preorder traversal and check the output manually
    printf("Preorder traversal: ");
    preorderTraversal(root);
    printf("\n");

    return 0;
}

// int main() {
//     struct TreeNode* root = NULL;

//     root = insert(root, 50);
//     insert(root, 30);
//     insert(root, 20);
//     insert(root, 40);
//     insert(root, 70);
//     insert(root, 60);
//     insert(root, 80);

//     printf("Inorder Traversal: ");
//     inorderTraversal(root);
//     printf("\n");

//     printf("Preorder Traversal: ");
//     preorderTraversal(root);
//     printf("\n");

//     printf("Postorder Traversal: ");
//     postorderTraversal(root);
//     printf("\n");

//     int searchValue = 40;
//     struct TreeNode* searchedNode = search(root, searchValue);
//     if (searchedNode != NULL) {
//         printf("Node with value %d found in the tree.\n", searchValue);
//     } else {
//         printf("Node with value %d not found in the tree.\n", searchValue);
//     }

//     return 0;
// }
