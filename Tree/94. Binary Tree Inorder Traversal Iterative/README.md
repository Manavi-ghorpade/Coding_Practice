### Intuition
The in-order traversal of a binary tree visits nodes in the following order: left subtree, root node, and right subtree. This traversal can be done iteratively using a stack to keep track of nodes as we traverse down the tree.

### Approach
1. Initialize an empty list `res` to store the traversal result and an empty stack `stack` to manage the nodes.
2. Use a pointer `cur` initialized to the root node.
3. Traverse the tree using a loop that continues as long as there are nodes to visit (either `cur` is not null or `stack` is not empty).
4. Within the loop, traverse to the leftmost node, pushing all the nodes along the way onto the stack.
5. Once the leftmost node is reached (when `cur` is null), pop the node from the stack, add its value to the result list `res`, and move to its right subtree by updating `cur` to `cur.right`.
6. Repeat the process until all nodes have been visited and added to `res`.
7. Return the result list `res`.

### Time Complexity
The time complexity is \(O(n)\), where \(n\) is the number of nodes in the binary tree. This is because each node is visited exactly once during the traversal.

### Space Complexity
The space complexity is \(O(n)\) in the worst case. This is because, in the worst-case scenario (when the tree is completely unbalanced, such as a linear tree), the stack will contain all nodes. However, on average, for a balanced tree, the space complexity will be \(O(h)\), where \(h\) is the height of the tree.