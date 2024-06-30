# Intuition
The problem requires us to find the sum of all left leaves in a binary tree. A left leaf is defined as a node that is a left child of its parent and has no children (i.e., it is a leaf). To solve this, we can use a recursive approach to traverse the tree and accumulate the values of left leaves.

# Approach
1. **Base Case:** If the root is `NULL`, return 0 since there are no nodes in the tree.
2. **Check for Left Leaf:** If the root has a left child, check if it is a leaf (both its left and right children are `NULL`). If it is, add its value to the sum.
3. **Recursive Calls:** Recursively call the function for both left and right children of the current node. The sum of left leaves in the entire tree will be the sum of left leaves in the left subtree plus the sum of left leaves in the right subtree.
4. **Return the Total Sum:** Return the accumulated sum of left leaves.

# Complexity
- **Time Complexity:** O(n)
  - We visit each node exactly once, where `n` is the number of nodes in the tree.
- **Space Complexity:** O(h)
  - In the worst case, the recursion stack will go as deep as the height of the tree, which is `h`. In the worst case (a completely unbalanced tree), `h` can be `n`. In the best case (a completely balanced tree), `h` can be `log(n)`.
