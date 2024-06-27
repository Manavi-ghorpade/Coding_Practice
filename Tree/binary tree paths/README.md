# Has Path Sum in Binary Tree

## Overview

This repository contains a solution to determine if there exists a root-to-leaf path in a given binary tree such that the sum of the node values along the path equals a specified target sum.

## Problem Statement

Given a binary tree and a target sum, implement a function to determine if the tree has a root-to-leaf path such that the sum of the node values along the path equals the target sum.

### Definition for a binary tree node (Python):

```python
class TreeNode:
    def __init__(self, val=0, left=None, right=None):
        self.val = val
        self.left = left
        self.right = right
```

## Solution Approach

The solution uses a depth-first search (DFS) approach to explore all paths from the root to the leaf nodes and checks if any path has a sum equal to the target sum.

### Approach:

1. **Base Case:**
   - If the current node is `None`, return `False` (i.e., no path exists).

2. **Leaf Node Check:**
   - If the current node is a leaf (both left and right children are `None`), check if the current sum equals the target sum.

3. **Recursive Step:**
   - Add the current node's value to the current sum.
   - Recursively check the left and right subtrees to see if any path sum equals the target sum.

### Steps:

1. Check if the root node is `None`. If it is, return `False`.
2. Initialize the current sum to `0`.
3. Add the current node's value to the current sum.
4. If the current node is a leaf, check if the current sum equals the target sum.
5. Recursively check the left and right subtrees, passing the updated current sum.
6. Return `True` if either subtree has a path that meets the criteria.

## Time and Space Complexity

- **Time Complexity:** O(n), where n is the number of nodes in the tree. The function visits each node once in the worst case.
- **Space Complexity:** O(h), where h is the height of the tree. In the worst case (a skewed tree), the space complexity can be O(n) due to the recursion stack.

