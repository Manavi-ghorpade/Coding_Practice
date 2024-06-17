### Intuition:

The goal of this function is to delete duplicates from a sorted singly-linked list. It does so by iterating through the list and modifying the pointers accordingly. The use of a dummy node simplifies edge case handling, and the 'match' variable helps track whether a duplicate has been found.


### Approach:

1. **Initialize Pointers:** Initialize a dummy node pointing to the head, and a 'prev' pointer to keep track of the previous node.
  
2. **Iterate Through the List:** Use a while loop to iterate through the linked list.

3. **Detect Duplicates:**
    - If the current node's value is the same as the next node's value, set 'match' to true.
    - If the current node's value is different from the next node's value and a match was found, reset 'match' to false, and update the 'prev' pointer to skip the duplicates.
    - If the current node's value is different from the next node's value and no match was found, update the 'prev' pointer to the current node.

4. **Handle Edge Case:** After the loop, if a match is still true and there is a remaining node, set the 'prev' pointer to null to remove the duplicates at the end of the list.

5. **Return Modified List:** Return the modified linked list (excluding duplicates).

### Time Complexity:

The time complexity is O(n), where 'n' is the number of nodes in the linked list. The algorithm iterates through the list once.

### Space Complexity:

The space complexity is O(1) since the algorithm uses a constant amount of extra space regardless of the input size. The use of a dummy node and a few pointers does not scale with the size of the input.
