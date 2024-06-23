# Max Depth of Binary Tree

## Overview

This repository contains a solution to determine the maximum depth of a given binary tree. The maximum depth of a binary tree is the number of nodes along the longest path from the root node down to the farthest leaf node.

## Problem Statement

Given a binary tree, implement a function to find its maximum depth. The maximum depth is defined as the number of nodes along the longest path from the root node down to the farthest leaf node.

### Definition for a binary tree node (C++):

```cpp
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr, right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
```

## Solution Approach

The solution uses a recursive depth-first search (DFS) approach to calculate the maximum depth of the binary tree. The depth of a node is defined as 1 plus the maximum depth of its left and right subtrees.

### Approach:

1. **Base Case:**
   - If the current node is `NULL`, return 0 (i.e., the depth of an empty tree is 0).

2. **Recursive Case:**
   - Recursively calculate the maximum depth of the left and right subtrees.
   - The depth of the current node is 1 plus the maximum of the depths of its left and right subtrees.

### Steps:

1. Check if the root node is `NULL`. If it is, return 0.
2. Recursively calculate the depth of the left subtree.
3. Recursively calculate the depth of the right subtree.
4. Return 1 plus the maximum of the depths of the left and right subtrees.

## Time and Space Complexity

- **Time Complexity:** O(n), where n is the number of nodes in the tree. The function visits each node once in the worst case.
- **Space Complexity:** O(h), where h is the height of the tree. In the worst case (a skewed tree), the space complexity can be O(n) due to the recursion stack.
