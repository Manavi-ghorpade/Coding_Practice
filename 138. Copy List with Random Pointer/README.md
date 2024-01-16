**Intuition:**
The goal is to create a deep copy of a linked list with random pointers. The intuition is to iterate through the original linked list, create new nodes, and store the mapping between the original and copied nodes. Then, iterate again to connect the copied nodes' next and random pointers using the stored mapping.

**Approach:**
1. Use an unordered map (`mp`) to store the mapping between original nodes and their copies.
2. First pass: Iterate through the original linked list, create new nodes, and store the mapping in the map.
3. Second pass: Iterate again to connect the copied nodes' next and random pointers using the stored mapping.
4. Return the head of the copied linked list.

**Time Complexity:**
The time complexity is O(N), where N is the number of nodes in the linked list. This is because we iterate through the linked list twice.

**Space Complexity:**
The space complexity is O(N) due to the unordered map (`mp`) that stores the mapping between original and copied nodes.
