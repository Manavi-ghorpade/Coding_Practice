# 61. Rotate List
Given the head of a linked list, rotate the list to the right by k places.

Input: head = [1,2,3,4,5], k = 2

Output: [4,5,1,2,3]

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The algorithm calculates the number of nodes in the linked list and determines the effective rotation by taking the modulo if `k` is greater than the total number of nodes. It then moves the current pointer to the last element of the first part of the rotated list, detaches the first part from the rest of the list, connects the tail to the original head, and updates the head pointer to the new start of the rotated list.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Traverse the linked list to find the number of nodes.
2. Handle cases where the rotation is equal to the total number of nodes or greater.
3. Calculate the position of the last element in the first part of the rotated list.
4. Move the current pointer to the last element of the first part.
5. Save the pointer to the next element after rotation.
6. Detach the first part from the rest of the list.
7. Connect the tail to the original head, effectively rotating the list.
8. Update the head pointer to the new start of the rotated list.
# Complexity
- Time complexity:
The algorithm traverses the linked list once, resulting in a time       complexity of O(N), where N is the number of nodes in the list.
- Space complexity:
The algorithm uses a constant amount of extra space, resulting in a space complexity of O(1).
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
