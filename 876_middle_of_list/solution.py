class Solution:
    def middleNode(self, head: Optional[ListNode]) -> Optional[ListNode]:
        # Initialize two pointers, slow and fast, both starting at the head of the linked list.
        slow, fast = head, head

        # Iterate through the linked list while the fast pointer and its next node are not None.
        while fast and fast.next:
            # Move the slow pointer one step forward.
            slow = slow.next
            # Move the fast pointer two steps forward.
            fast = fast.next.next

        # At this point, the slow pointer is at the middle node of the linked list.
        # Return the middle node.
        return slow