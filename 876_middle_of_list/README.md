# 876. Middle of the Linked List

Given the head of a singly linked list, return the middle node of the linked list.
If there are two middle nodes, return the second middle node.

Input: head = [1,2,3,4,5]

Output: [3,4,5]

Explanation: The middle node of the list is node 3.

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The goal is to find the middle node of a singly-linked list. The code uses two pointers, `slow` and `fast`, starting from the head of the list. The `slow` pointer moves one step at a time, and the `fast` pointer moves two steps at a time. By doing this, when the `fast` pointer reaches the end of the list, the `slow` pointer will be at the middle of the list.

# Approach
<!-- Describe your approach to solving the problem. -->
1. **Initialization:**
   - Initialize two pointers (`slow` and `fast`) to the head of the linked list.

2. **Traversal:**
   - Use a while loop to traverse the linked list.
   - In each iteration, move the `slow` pointer one step forward and the `fast` pointer two steps forward.

3. **Return:**
   - When the loop exits (either because the `fast` pointer reaches the end or becomes null), the `slow` pointer is pointing to the middle node.
   - Return the `slow` pointer.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity of this approach is O(N), where N is the number of nodes in the linked list. 

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity is O(1) since only a constant amount of extra space is used for the two pointers (`slow` and `fast`). 
