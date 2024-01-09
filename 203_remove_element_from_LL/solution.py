# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def removeElements(self, head, val):
        """
        Remove all nodes with a given value from the linked list.
        
        :type head: ListNode
        :type val: int
        :rtype: ListNode
        """
        # Initialize pointers
        curr = head
        dummy = ListNode(0, head)
        prev = dummy

        # Iterate through the linked list
        while curr:
            # Check if the current node's value matches the target value
            if curr.val == val:
                # Remove the current node by updating the previous node's next pointer
                prev.next = curr.next
            else:
                # Move the previous pointer to the current node
                prev = curr
            
            # Move to the next node
            curr = curr.next

        # Return the modified linked list
        return dummy.next
