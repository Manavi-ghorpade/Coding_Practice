**Intuition:**
The goal is to perform insertion sort on a linked list. The intuition is to maintain a sorted portion of the linked list and insert each element from the unsorted portion into its correct position in the sorted part.

**Approach:**
1. Use a dummy node to represent the start of the sorted portion.
2. Iterate through the linked list, starting from the second element (`curr`), and compare it with the elements in the sorted portion.
3. Find the correct position in the sorted portion and insert the current element.
4. Update pointers to maintain the sorted and unsorted portions.
5. Repeat until all elements are sorted.

**Time Complexity:**
The time complexity is O(N^2), where N is the number of nodes in the linked list. This is because, in the worst case, each node may need to be inserted into its correct position in the sorted portion, resulting in quadratic time complexity.

**Space Complexity:**
The space complexity is O(1) since the algorithm uses a constant amount of extra space regardless of the input size. The sorting is done in place without using additional space proportional to the input size.