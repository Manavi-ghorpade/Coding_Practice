
### Intuition
The problem requires constructing a binary tree from its inorder and postorder traversal sequences. The key observations are:
1. **Postorder Traversal:** The last element in the postorder list is the root of the tree.
2. **Inorder Traversal:** This traversal divides the tree into left and right subtrees based on the position of the root element.

Using these observations, we can build the tree recursively:
- **Step 1:** Pop the last element from the postorder list. This is the root of the current subtree.
- **Step 2:** Find the index of this root in the inorder list. This index divides the inorder list into left and right subtrees.
- **Step 3:** Recursively build the right subtree using the elements after the root in the inorder list, then build the left subtree using the elements before the root.

### Time Complexity
- Constructing the `hash_map` takes \(O(n)\) time, where \(n\) is the number of elements in the inorder list.
- The recursive function `helper` is called once for each element in the postorder list, so it is called \(n\) times.
- Each call to `helper` performs an \(O(1)\) operation (looking up the index in the hash_map and popping from the postorder list).
- Therefore, the overall time complexity is \(O(n)\).

### Space Complexity
- The `hash_map` takes \(O(n)\) space to store the indices.
- The recursion stack can go as deep as the height of the tree. In the worst case (skewed tree), the height of the tree is \(O(n)\).
- Therefore, the overall space complexity is \(O(n)\).

### Summary
- **Time Complexity:** \(O(n)\)
- **Space Complexity:** \(O(n)\)

