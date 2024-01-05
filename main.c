#include "binaryTrees.h"
#include "displayTree.h"

int main() {
    // Create a root node
    treeNode* root = createNode(10);

    // Insert new nodes
    root = insert(root, 5);
    root = insert(root, 15);
    root = insert(root, 3);
    root = insert(root, 7);
    root = insert(root, 8);
    root = insert(root, 13);
    root = insert(root, 17);

    // Display the tree
    printTree(root, 0);

    // Perform inorder traversal
    printf("Inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    // Perform preorder traversal
    printf("Preorder traversal: ");
    preorderTraversal(root);
    printf("\n");

    // Perform postorder traversal
    printf("Postorder traversal: ");
    postorderTraversal(root);
    printf("\n");

    // Search for a node
    treeNode* searchResult = search(root, 7);
    printf("Search result: %d\n", searchResult->data);

    // Calculate the height of the tree
    int treeHeight = height(root);
    printf("Tree height: %d\n", treeHeight);

    // Find the minimum and maximum value nodes
    treeNode* minNode = findMin(root);
    treeNode* maxNode = findMax(root);
    printf("Min node: %d, Max node: %d\n", minNode->data, maxNode->data);

    // Check if the tree is a BST
    int isTreeBST = isBST(root);
    printf("Is the tree a BST? %s\n", isTreeBST ? "Yes" : "No");

    // Find the successor and predecessor of a node
    treeNode* successor = getSuccessor(root, 5);
    treeNode* predecessor = getPredecessor(root, 5);
    printf("Successor of 5: %d, Predecessor of 5: %d\n", successor->data, predecessor->data);

    // Delete a node
    root = delete(root, 5);
    printf("After deleting 5, inorder traversal: ");
    inorderTraversal(root);
    printf("\n");

    // Check if two trees are identical
    treeNode* root2 = createNode(10);
    root2 = insert(root2, 5);
    root2 = insert(root2, 15);
    root2 = insert(root2, 3);
    root2 = insert(root2, 13);
    root2 = insert(root2, 17);
    int identical = isIdentical(root, root2);
    printf("Are the two trees identical? %s\n", identical ? "Yes" : "No");

    return 0;
}