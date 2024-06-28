# Intuition
The problem is to find the mode(s) in a binary search tree (BST). The mode(s) are the elements that appear most frequently. In a BST, an in-order traversal yields nodes in sorted order. By using this property, we can traverse the tree and count the frequency of each value, keeping track of the mode(s).

# Approach
1. **In-Order Traversal:** Perform an in-order traversal of the tree. This ensures that we process nodes in ascending order of their values.
2. **Count Frequencies:** Maintain a count of the current value being processed. If the current value is the same as the previous value, increment the count. If it's different, reset the count to 1.
3. **Track Modes:** Keep track of the maximum frequency encountered. If the current count exceeds the maximum frequency, update the maximum frequency and reset the modes list. If the current count equals the maximum frequency, add the current value to the modes list.
4. **Edge Cases:** Handle edge cases where the tree might be empty.

# Complexity
- **Time Complexity:** $$O(n)$$
  - We visit each node exactly once during the in-order traversal, where `n` is the number of nodes in the tree.
- **Space Complexity:** $$O(h)$$
  - The space complexity is determined by the recursion stack, which depends on the height of the tree. In the worst case (a completely unbalanced tree), the height `h` can be `n`. In the best case (a completely balanced tree), `h` can be `log(n)`. The additional space used by the `vec` list is proportional to the number of unique modes, which is typically much smaller than `n`.