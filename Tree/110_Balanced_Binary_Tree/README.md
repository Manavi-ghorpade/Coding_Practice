# Balanced Binary Tree

## Overview

This repository contains a solution to determine whether a given binary tree is height-balanced. A binary tree is height-balanced if the difference between the heights of the left and right subtrees of any node is no more than one.

## Solution Explanation

The solution uses a depth-first search approach to calculate the height of each subtree and checks the balance condition for each node.

### TreeNode Structure

Defines a node in the binary tree with an integer value and pointers to its left and right children.

### Solution Class

#### Methods

1. height(TreeNode* root):
    - Calculates the height of the tree.
    - Recursively determines the height of the left and right subtrees.
    - Checks if the current node is balanced by comparing the heights of the left and right subtrees.
    - Returns the height of the current node.

2. isBalanced(TreeNode* root):
    - Initiates the height calculation starting from the root.
    - Returns the balance status of the tree.

### Example

An example constructs a binary tree and checks if it is height-balanced using the `Solution` class.

## Time and Space Complexity

- **Time Complexity:** O(n), where n is the number of nodes in the tree. This is because the `height` function visits each node once in the worst case.
- **Space Complexity:** O(log n) in the case of a balanced tree, due to the recursive nature of the `height` function. In the worst case (a skewed tree), the space complexity can be O(n) due to the recursion stack.
