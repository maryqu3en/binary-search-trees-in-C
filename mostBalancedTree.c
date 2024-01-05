#include "displayTree.h"


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