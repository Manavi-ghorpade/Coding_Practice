### Partition List
Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

Input: head = [1,4,3,2,5,2], x = 3

Output: [1,2,2,4,3,5]
### Intuition:

The goal of this function is to partition a linked list into two parts, one containing nodes with values less than a given value `x`, and the other containing nodes with values greater than or equal to `x`.
### Approach:

1. **Initialize Pointers:**
   - Create two new linked lists (`right` and `left`) to store nodes greater than or equal to `x` and nodes less than `x`, respectively.
   - Maintain pointers to the tails of these linked lists (`rtail` and `ltail`).

2. **Iterate Through the List:**
   - Traverse the original linked list and distribute nodes into the `left` and `right` lists based on their values.

3. **Connect Lists:**
   - After traversing the original list, connect the `left` and `right` lists, ensuring that the tail of the `right` list points to `NULL`.

4. **Return Result:**
   - Return the modified linked list, where nodes less than `x` are followed by nodes greater than or equal to `x`.

### Time Complexity:

The time complexity is O(n), where 'n' is the number of nodes in the linked list. The algorithm iterates through the list once.

### Space Complexity:

The space complexity is O(1) since the algorithm uses a constant amount of extra space regardless of the input size. The additional space is used for pointers and does not scale with the size of the input.
