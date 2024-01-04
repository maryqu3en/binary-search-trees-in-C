#ifndef BINARYTREES_H
#define BINARYTREES_H

#include<stdio.h>
#include<stdlib.h>
typedef struct treeNode
{
    int data;
    struct node *left;
    struct node *right;
}treeNode;

// binary search trees functions
struct treeNode* insert(struct treeNode* root, int data);
void inorderTraversal(struct treeNode* root);
void preorderTraversal(struct treeNode* root);
void postorderTraversal(struct treeNode* root);
struct treeNode* search(struct treeNode* root, int data);
int height(struct treeNode* root);
struct treeNode* delete(struct treeNode* root, int data);
struct treeNode* findMin(struct treeNode* root);
struct treeNode* findMax(struct treeNode* root);
int isBST(struct treeNode* root);
struct treeNode* getSuccessor(struct treeNode* root, int data);
struct treeNode* getPredecessor(struct treeNode* root, int data);
int isBSTUtil(struct treeNode* root, int minValue, int maxValue);
int isIdentical(treeNode* root1, treeNode* root2);

#endif