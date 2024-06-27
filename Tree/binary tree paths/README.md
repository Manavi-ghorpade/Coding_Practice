### Intuition
The problem is to find all paths from the root to leaf nodes in a binary tree. Each path should be represented as a string in the form "root->node1->node2->...->leaf". To solve this problem, we need to traverse the tree and record the path for each leaf node.

### Approach
1. **Recursive Traversal**: We use a recursive function to traverse the binary tree. We maintain a `path` string that records the current path from the root to the current node.
2. **Base Case**: If the current node is `None`, we return immediately as there is nothing to process.
3. **Leaf Node**: If the current node is a leaf (both left and right children are `None`), we append the current node's value to the `path` and add it to the result list.
4. **Internal Node**: If the current node is not a leaf, we append the current node's value followed by `"->"` to the `path` and recursively call the function for both left and right children.
5. **Result**: The `result` list collects all paths from root to leaf nodes.

### Time Complexity
The time complexity is \(O(N)\), where \(N\) is the number of nodes in the tree. This is because each node is visited exactly once.

### Space Complexity
The space complexity is \(O(H)\), where \(H\) is the height of the tree. This accounts for the recursive call stack. In the worst case (a skewed tree), \(H\) could be \(N\), and in the best case (a balanced tree), \(H\) would be \(\log N\).