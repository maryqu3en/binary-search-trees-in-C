#include <stdio.h>
#include <stdlib.h>
#include "displayTree.h"


void printTree(treeNode* root, int space) {
    int i;
    if (root == NULL) {
        return;
    }

    space += 10;

    printTree(root->right, space);

    printf("\n");
    for (i = 10; i < space; i++) {
        printf(" ");
    }
    printf("%d\n", root->data);

    printTree(root->left, space);
}
