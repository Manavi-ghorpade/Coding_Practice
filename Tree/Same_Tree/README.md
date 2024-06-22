# Determine if Two Binary Trees are Identical

## Overview

This repository contains a solution to determine whether two given binary trees are structurally identical and have the same node values at each corresponding position.

## Problem Statement

Implement a function `isSameTree` in the `Solution` class that takes two pointers to `TreeNode` objects, `p` and `q`, and returns `true` if the binary trees rooted at `p` and `q` are identical in structure and node values, and `false` otherwise.

## Solution Explanation

The `isSameTree` function uses a recursive approach to compare the binary trees:
- If both `p` and `q` are `NULL`, it returns `true` (base case).
- If either `p` or `q` is `NULL` but not both, or if the values of `p` and `q` differ, it returns `false`.
- Otherwise, it recursively compares the left and right subtrees of `p` and `q`.

## Time and Space Complexity

- **Time Complexity:** O(n), where n is the number of nodes in the tree. This is because the `isSameTree` function visits each node once in the worst case.
- **Space Complexity:** O(h), where h is the height of the tree. In the worst case (a skewed tree), the space complexity can be O(n) due to the recursion stack.
