### Intuition
The problem requires constructing a binary tree from its preorder and inorder traversal sequences. The key insights are:

1. **Preorder Traversal**: The first element in the preorder list is the root of the tree.
2. **Inorder Traversal**: The position of the root element in the inorder list divides the tree into left and right subtrees.

Using these observations, we can build the tree recursively:
- **Step 1**: Take the current element from the preorder list as the root.
- **Step 2**: Find the index of this root in the inorder list. This index separates the inorder list into left and right subtrees.
- **Step 3**: Recursively build the left subtree using the elements before the root in the inorder list, then build the right subtree using the elements after the root.

### Time Complexity
- Constructing the `hash_map` takes \(O(n)\) time, where \(n\) is the number of elements in the inorder list.
- The recursive function `helper` is called once for each element in the preorder list, so it is called \(n\) times.
- Each call to `helper` performs an \(O(1)\) operation (looking up the index in the hash_map and incrementing the preorder index).
- Therefore, the overall time complexity is \(O(n)\).

### Space Complexity
- The `hash_map` takes \(O(n)\) space to store the indices.
- The recursion stack can go as deep as the height of the tree. In the worst case (skewed tree), the height of the tree is \(O(n)\).
- Therefore, the overall space complexity is \(O(n)\).