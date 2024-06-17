# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution(object):
    def reverseList(self, head):
        """
        Reverse a singly-linked list.
        
        :type head: ListNode
        :rtype: ListNode
        """
        # Initialize pointers
        curr = head
        prev = None

        # Iterate through the linked list
        while curr:
            # Save the next node to prevent losing the rest of the list
            nextnode = curr.next

            # Reverse the link by updating the next pointer of the current node
            curr.next = prev

            # Move the pointers forward
            prev = curr
            curr = nextnode

        # Return the new head of the reversed linked list
        return prev



        