# 24. Swap Nodes in Pairs
Given a linked list, swap every two adjacent nodes and return its head. You must solve the problem without modifying the values in the list's nodes (i.e., only nodes themselves may be changed.)

Input: head = [1,2,3,4]

Output: [2,1,4,3]

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->
The function aims to swap pairs of nodes in a singly-linked list. It does this by using a dummy node to simplify the code and then iteratively swapping pairs of adjacent nodes.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a dummy node and initialize pointers `prev` and `curr`.
2. Iterate through the list and swap pairs of adjacent nodes by adjusting pointers.
3. Move the pointers to the next pair and repeat until all possible pairs are swapped.
4. Return the new head of the modified list.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity is O(N), where N is the number of nodes in the linked list. The algorithm processes each node once, and the time complexity is linear with respect to the number of nodes.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity is O(1) because the algorithm uses a constant amount of extra space regardless of the input size. The only extra space used is for the dummy node and a few pointers.
