**Intuition:**
The goal of the `oddEvenList` function is to modify a given singly-linked list such that all the odd-indexed nodes come before the even-indexed nodes. The relative order within odd and even indices should be maintained.

**Approach:**
1. Initialize pointers `odd`, `even`, and `headeve` to keep track of odd nodes, even nodes, and the head of the even nodes, respectively.
2. Check if the `head` of the list is not null. If it is null, return the head.
3. Traverse the list using a while loop with the condition `even && even->next`. In each iteration, update the next pointers of `odd` and `even` nodes to skip the next node and move to the subsequent nodes.
4. After the loop, connect the last odd node to the head of the even nodes (`headeve`).
5. Return the modified list.

**Space Complexity:**
The space complexity is O(1) because the algorithm uses a constant amount of extra space regardless of the input size. The space used is for the pointers `odd`, `even`, and `headeve`.

**Time Complexity:**
The time complexity is O(n), where n is the number of nodes in the linked list. The while loop iterates through the list once, and each iteration involves constant time operations. Therefore, the overall time complexity is linear in the size of the input list.