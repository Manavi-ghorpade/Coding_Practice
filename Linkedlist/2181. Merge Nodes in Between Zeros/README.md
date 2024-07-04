### Intuition
The goal of this problem is to merge nodes in a linked list such that the value of each node is the sum of all values from the previous zero (inclusive) to the next zero (exclusive). Essentially, each segment between two zero nodes (including the starting zero) needs to be summed up and stored in a single node, with all other nodes being removed.

0 -> 3 -> 1 -> 0 -> 4 -> 5 -> 2 -> 0
ans: 4 -> 11
### Approach
1. **Initialization**: 
   - Start from the node next to the head (since the head is always zero).
   - Maintain a pointer `prev` to track the node where the sum will be stored.
   - Initialize `sum` to accumulate values between zeros.
   
2. **Traversal**:
   - Traverse through the linked list using the `node` pointer.
   - Add the value of the current node to `sum`.
   - When encountering a zero:
     - Move `prev` to the next node (which will be used to store the sum).
     - Update the value of `prev` to `sum`.
     - Reset `sum` to 0 for the next segment.
   
3. **Termination**:
   - After the loop, set `prev->next` to `NULL` to remove all nodes after the last summed node.
   - Return `head->next` since the head is a dummy zero node.

### Time Complexity
- **O(n)**: The solution involves a single pass through the linked list where `n` is the number of nodes in the list.

### Space Complexity
- **O(1)**: The solution uses a constant amount of extra space, only for a few pointers and variables.
