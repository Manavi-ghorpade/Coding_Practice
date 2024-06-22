# Minimum Depth of Binary Tree

## Overview

This repository contains a solution to determine the minimum depth of a given binary tree. The minimum depth is defined as the number of nodes along the shortest path from the root node down to the nearest leaf node.

## Problem Statement

Given the definition of a binary tree node, implement a function to calculate the minimum depth of the binary tree. The minimum depth is the number of nodes along the shortest path from the root node down to the nearest leaf node.

## Solution Approach

The solution uses a recursive approach to determine the minimum depth of the binary tree:

1. **Base Cases:**
   - If the root is `NULL`, return `0` (this handles the case of an empty tree).
   - If both the left and right children of the root are `NULL`, return `1` (this handles the case of a leaf node).

2. **Recursive Steps:**
   - Recursively calculate the minimum depth of the left and right subtrees.
   - Use a large value (`INT_MAX` in C++ or `float('inf')` in Python) to handle cases where a subtree is missing. This ensures that only the depths of existing subtrees are considered.

3. **Calculate Minimum Depth:**
   - Return `1 + min(left_depth, right_depth)`, where `left_depth` and `right_depth` are the minimum depths of the left and right subtrees, respectively.

## Steps

1. Check if the root node is `NULL`. If it is, return `0`.
2. Check if both left and right children of the root are `NULL`. If they are, return `1`.
3. Recursively calculate the minimum depth of the left subtree. If the left child is `NULL`, use a large value.
4. Recursively calculate the minimum depth of the right subtree. If the right child is `NULL`, use a large value.
5. Return `1 + min(left_depth, right_depth)` to get the minimum depth of the tree.

## Time and Space Complexity

- **Time Complexity:** O(n), where n is the number of nodes in the tree. The function visits each node once in the worst case.
- **Space Complexity:** O(h), where h is the height of the tree. In the worst case (a skewed tree), the space complexity can be O(n) due to the recursion stack.

