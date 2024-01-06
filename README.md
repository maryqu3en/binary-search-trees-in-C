# Binary Search Trees implementation

This repository contains C language implementations of binary search trees. Additionally, there are exercises to reinforce your understanding of this fundamental data structure.

## Table of Contents

- [Introduction](#introduction)
- [Implemented Data Structures](#implemented-data-structures)
- [Exercise Problems](#exercise-problems)
- [How to Use](#how-to-use)

## Introduction

Understanding binary search trees data structures is crucial in computer science. This repository provides implementations of binary search trees, which are dynamic data structures allowing efficient memory usage.

## Implemented Data Structures

### Binary Search Trees

- `createNode(int data)`: Creates a new node with the given data.
- `insert(treeNode* root, int data)`: Inserts a new node with the given data into the tree.
- `search(treeNode* root, int data)`: Searches for a node with the given data.
- `delete(treeNode* root, int data)`: Deletes the node with the given data.
- `findMin(treeNode* root)`: Finds the node with the minimum data.
- `findMax(treeNode* root)`: Finds the node with the maximum data.
- `height(treeNode* root)`: Calculates the height of the tree.
- `preorderTraversal(treeNode* root)`: Performs a preorder traversal of the tree.
- `inorderTraversal(treeNode* root)`: Performs an inorder traversal of the tree.
- `postorderTraversal(treeNode* root)`: Performs a postorder traversal of the tree.
- `isBST(treeNode* root)`: Checks if the tree is a binary search tree (BST).
- `getSuccessor(treeNode* root, int data)`: Finds the inorder successor of a node.
- `getPredecessor(treeNode* root, int data)`: Finds the inorder predecessor of a node.
- `isIdentical(treeNode* root1, treeNode* root2)`: Checks if two trees are identical.
- `printLeafNodes(treeNode* root)`: Print the leaf nodes of the tree.

## Exercise Problems

1. Display the tree in a structured manner:
   - Display the tree in a structured manner for visual understanding.

2. Most balanced tree:
   - Find a way to create the most balanced tree out of an array (can be sorted, can be the opposite).

## How to Use

1. Clone the repository:

   ```bash
   git clone https://github.com/maryqu3en/binary-search-trees-in-C.git
   ```

2. Navigate to the project directory:

   ```bash
   cd binary-search-trees-in-C
   ```

3. Compile the C files:

   ```bash
   gcc -o main *.c
   ```

4. Run the program:

   ```bash
   ./main
   ```
