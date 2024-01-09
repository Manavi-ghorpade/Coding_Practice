### Intuition:
The code aims to reverse a given singly-linked list.

### Approach:
1. Initialize two pointers, `curr` and `prev`.
2. Iterate through the linked list.
3. In each iteration, reverse the link by updating the `next` pointer of the current node (`curr.next = prev`).
4. Move the pointers forward.
5. Continue until the end of the linked list is reached.

### Time Complexity:
The time complexity is O(n), where n is the number of nodes in the linked list. The algorithm traverses the entire linked list once.

### Space Complexity:
The space complexity is O(1) as no additional data structures are used; the algorithm uses only a constant amount of space regardless of the input size.