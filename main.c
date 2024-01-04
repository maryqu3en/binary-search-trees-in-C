#include "binaryTrees.h"



int main() {
    struct TreeNode* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder Traversal: ");
    inorderTraversal(root);
    printf("\n");

    printf("Preorder Traversal: ");
    preorderTraversal(root);
    printf("\n");

    printf("Postorder Traversal: ");
    postorderTraversal(root);
    printf("\n");

    int searchValue = 40;
    struct TreeNode* searchedNode = search(root, searchValue);
    if (searchedNode != NULL) {
        printf("Node with value %d found in the tree.\n", searchValue);
    } else {
        printf("Node with value %d not found in the tree.\n", searchValue);
    }

    return 0;
}
