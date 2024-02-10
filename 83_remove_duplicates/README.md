# 83. Remove Duplicates from Sorted List
Given the head of a sorted linked list, delete all duplicates such that each element appears only once. Return the linked list sorted as well.

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->
The function aims to remove duplicates from a sorted singly-linked list. It does this by traversing the list and skipping nodes with duplicate values.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a dummy node to simplify the code and handle edge cases.
2. Initialize pointers `prev` and `curr` for traversal and deletion.
3. Traverse the list, and when a duplicate is found, skip the current node.
4. Move the pointers to the next pair of nodes and repeat until the end of the list.
5. Return the head of the modified list.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity is O(N), where N is the number of nodes in the linked list. The algorithm processes each node once, and the time complexity is linear with respect to the number of nodes.
- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity is O(1) because the algorithm uses a constant amount of extra space regardless of the input size. The only extra space used is for the dummy node and a few pointers.
