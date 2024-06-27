## Invert Binary Tree

### Problem Statement
Invert a binary tree.

### Intuition
The intuition behind inverting a binary tree is straightforward: for each node in the tree, we simply swap its left and right children. By applying this swap recursively to each node in the tree, we obtain the inverted version of the tree.

### Approach
To invert a binary tree, we can follow these steps:

1. **Base Case**: If the current node is `None`, return `None`. This handles the case where we reach a leaf node's child or the tree is initially empty.
2. **Swap Nodes**: For the current node, swap its left and right children.
3. **Recursive Inversion**: Recursively invert the left and right subtrees.
4. **Return Root**: Finally, return the root of the inverted tree.

### Time Complexity
The time complexity of this approach is \(O(n)\), where \(n\) is the number of nodes in the binary tree. This is because each node is visited exactly once.

### Space Complexity
The space complexity of this approach is \(O(h)\), where \(h\) is the height of the binary tree. This space is used by the call stack during the recursive calls. In the worst case, for a completely unbalanced tree, the height \(h\) could be \(n\), resulting in a space complexity of \(O(n)\). For a balanced tree, the height \(h\) would be \(\log(n)\), leading to a space complexity of \(O(\log(n))\).