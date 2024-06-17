**Intuition:**
To swap the k-th node from the beginning with the k-th node from the end in a singly-linked list, we first need to find the k-th node from the beginning. We can then use two pointers technique to find the k-th node from the end. Once we have references to both nodes, we simply swap their values.

**Approach:**
1. Start by initializing two pointers: `curr` and `left`, both pointing to the head of the linked list.
2. Move the `curr` pointer `k-1` times forward to reach the k-th node from the beginning.
3. Initialize another pointer `right` to `curr`.
4. Traverse the linked list with pointers `left` and `right` simultaneously. When `right` reaches the end of the list, `left` will be pointing to the k-th node from the end.
5. Swap the values of the k-th node from the beginning (`curr`) and the k-th node from the end (`left`).
6. Return the head of the linked list.

**Space Complexity:**
The space complexity is O(1) because we are not using any extra space that grows with the size of the input.

**Time Complexity:**
The time complexity is O(n) where n is the number of nodes in the linked list. We need to traverse the list twice: once to find the k-th node from the beginning, and once to find the k-th node from the end. Both traversals take linear time. Additionally, the swapping operation takes constant time. Therefore, the overall time complexity is O(n).