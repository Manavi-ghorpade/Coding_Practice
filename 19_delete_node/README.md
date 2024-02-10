# 19. Remove Nth Node From End of List
Input: head = [1,2,3,4,5], n = 2

Output: [1,2,3,5]

# Intuition

<!-- Describe your first thoughts on how to solve this problem. -->
The goal is to remove the N-th node from the end of a singly-linked list. Using two pointers, we can find the target node and modify the list accordingly.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Create a dummy node to handle edge cases where the head needs to be removed.
2. Initialize two pointers, `left` and `right`, pointing to the dummy node and the head, respectively.
3. Move the `right` pointer N nodes ahead to create a gap between the two pointers.
4. Move both pointers simultaneously until the `right` pointer reaches the end of the list.
5. Adjust the `left` pointer to skip the N-th node, effectively removing it from the list.
6. Return the head of the modified linked list.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The algorithm makes a single pass through the linked list, resulting in a time complexity of O(N), where N is the number of nodes in the list.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity is O(1) since the algorithm uses only a constant amount of extra space, regardless of the input size.
