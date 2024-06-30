### Intuition

The problem requires finding the minimum absolute difference between values of any two nodes in a binary search tree (BST). A straightforward approach involves comparing each node with its previous node in an in-order traversal to compute the minimum difference.
Note : Inorder traversal of BST gives sorted list 
### Approach

1. **Initialization**: 
   - Initialize `self.min_val` to `sys.maxsize` to track the minimum difference found.
   - Initialize `self.prev` to `sys.maxsize` as the variable to store the value of the previous node during traversal.

2. **In-order Traversal**: 
   - Implement a recursive function `diff` that performs an in-order traversal of the BST.
   - Recursively call `diff` on the left subtree.
   - Calculate the absolute difference between the current node's value (`root.val`) and `self.prev`, update `self.min_val` if this difference is smaller.
   - Update `self.prev` to the current node's value (`root.val`).
   - Recursively call `diff` on the right subtree.

3. **Compute Minimum Difference**: 
   - Call `self.diff(root)` to start the traversal from the root node.
   - Return `self.min_val` which contains the minimum difference found during the traversal.

### Complexity

- **Time Complexity**: 
  - The time complexity is \( O(n) \), where \( n \) is the number of nodes in the binary tree. This is because each node is visited once during the in-order traversal.

- **Space Complexity**: 
  - The space complexity is \( O(h) \), where \( h \) is the height of the binary tree. This is due to the recursive call stack, which can go as deep as the height of the tree.