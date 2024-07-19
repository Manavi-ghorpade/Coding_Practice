### Intuition

The problem requires us to find the sum of all numbers formed from root to leaf paths in a binary tree. Each path from the root to a leaf node represents a number formed by concatenating the values of the nodes along that path. 

To achieve this, we can use a preorder traversal (root, left, right). We maintain a running number that represents the current number formed from the root to the current node. For each node:
1. We multiply the current number by 10 (to shift digits left) and add the node's value.
2. If the node is a leaf, we return the current number as it represents a complete number formed from the root to this leaf.
3. If the node is not a leaf, we recursively traverse its left and right subtrees, summing the results.

### Time Complexity

The time complexity of this solution is \(O(N)\), where \(N\) is the number of nodes in the tree. This is because we visit each node exactly once during the traversal.

### Space Complexity

The space complexity is \(O(H)\), where \(H\) is the height of the tree. This is due to the recursion stack, which in the worst case (for a skewed tree) can go as deep as the height of the tree. For a balanced tree, the height is \(\log N\), leading to a space complexity of \(O(\log N)\).