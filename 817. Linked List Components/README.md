### Intuition:
The problem requires counting the number of connected components in a linked list where the connected components are determined by the presence of values from a given array `nums`. If two values from the array `nums` appear consecutively in the linked list, they are considered connected. Otherwise, they are not part of the same component.

### Approach:
1. **HashSet for Quick Lookup**: Create a hash set (`unordered_set`) to store the values from the array `nums`. This allows for quick lookup of whether a value from the linked list exists in the array.

2. **Traverse the Linked List**: Traverse the linked list and for each node:
   - Check if the value of the current node exists in the hash set.
   - If the value exists in the hash set and the previous node's value does not exist in the hash set (or if it's the head of the linked list), it indicates the start of a new connected component. Increment the count of connected components.

3. **Return Count**: Return the count of connected components obtained during the traversal.

### Space Complexity:
- **HashSet**: O(m), where m is the number of elements in the `nums` array. The space complexity is determined by the hash set used to store the values from the array.

### Time Complexity:
- **HashSet Initialization**: O(m), where m is the number of elements in the `nums` array. Inserting elements into the hash set takes linear time.
- **Traversing Linked List**: O(n), where n is the number of nodes in the linked list. We need to traverse the entire linked list once to count the connected components.
- Overall, the time complexity is O(n + m), where n is the number of nodes in the linked list and m is the number of elements in the `nums` array.