#ifndef BINARYTREES_H
#define BINARYTREES_H

#include<stdio.h>
#include<stdlib.h>
typedef struct treeNode
{
    int data;
    struct treeNode *left;
    struct treeNode *right;
}treeNode;

// binary search trees functions
treeNode* createNode(int);
treeNode* insert(treeNode*, int);
void inorderTraversal(treeNode*);
void preorderTraversal(treeNode*);
void postorderTraversal(treeNode*);
treeNode* search(treeNode*, int);
int height(treeNode*);
treeNode* delete(treeNode*, int);
treeNode* findMin(treeNode*);
treeNode* findMax(treeNode*);
int isBST(treeNode*);
treeNode* getSuccessor(treeNode*, int);
treeNode* getPredecessor(treeNode*, int);
int isBSTUtil(treeNode*, int, int);
int isIdentical(treeNode*, treeNode*);

#endif