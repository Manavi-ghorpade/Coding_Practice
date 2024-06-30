### Intuition

The problem involves merging two binary trees by summing up corresponding nodes. The goal is to create a new tree where each node contains the sum of the nodes from the corresponding nodes of the input trees. Instead of creating new tree change the first tree itself. 

### Approach

1. **Base Case**:
   - If either `root1` or `root2` is `None`, return the other tree. This handles cases where one tree might be deeper or have more nodes than the other.

2. **Merge Operation**:
   - Update `root1.val` to be the sum of `root1.val` and `root2.val`.
   - Recursively merge the left subtrees of `root1` and `root2`.
   - Recursively merge the right subtrees of `root1` and `root2`.

3. **Recursive Structure**:
   - The function `mergeTrees` is called recursively on the left and right children of `root1` and `root2` until all corresponding nodes have been merged.

### Complexity

- **Time Complexity**: \( O(n) \), where \( n \) is the total number of nodes in the smaller of the two trees. This is because each node is visited exactly once during the traversal.
  
- **Space Complexity**: \( O(n) \), due to the recursion stack. In the worst case, the recursion depth could be equal to the height of the smaller tree.