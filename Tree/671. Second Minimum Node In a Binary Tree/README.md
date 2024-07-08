### Intuition

The problem is to find the second minimum value in a binary tree where each node has either zero or two children, and the value of each node is not greater than the values of its children. This implies that the root node has the smallest value, and any second minimum value must be somewhere deeper in the tree.

1. **Initialization:**
   - `second` is initialized to `INT_MAX` to represent the current second minimum value.
   - `no_second` is a flag to check if there was any different value found initially that could be a candidate for the second minimum value.

2. **Initial Check:**
   - The initial checks are to see if either of the children of the root has a different value from the root. If so, that value is a candidate for the second minimum.

3. **Recursive Search:**
   - The function `findSecond` is recursively called to traverse the tree and find the smallest value greater than the root's value (i.e., the second minimum value).
   - The traversal is a depth-first search (DFS) which checks each node's value. If it finds a value different from the root's value and smaller than the current `second`, it updates `second`.

4. **Final Check:**
   - If after the traversal, `second` remains `INT_MAX` and `no_second` is `false`, it means there was no valid second minimum value, and the function returns `-1`.

### Time Complexity

The time complexity of this solution is \( O(n) \), where \( n \) is the number of nodes in the binary tree. This is because the function `findSecond` performs a DFS traversal of the entire tree, visiting each node exactly once.

### Space Complexity

The space complexity is \( O(h) \), where \( h \) is the height of the binary tree. This space is used by the call stack during the DFS traversal. In the worst case (for a skewed tree), \( h \) can be equal to \( n \), making the space complexity \( O(n) \). For a balanced tree, the space complexity would be \( O(\log n) \).