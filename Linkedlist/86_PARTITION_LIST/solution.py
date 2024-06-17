# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def partition(self, head: Optional[ListNode], x: int) -> Optional[ListNode]:
        # Create two new linked lists to store nodes less than and greater than x.
        left, right = ListNode(), ListNode()
        
        # Pointers to the tails of the new linked lists.
        ltail, rtail = left, right
        
        # Iterate through the original linked list.
        while head:
            # If the current node's value is greater than or equal to x, add it to the 'right' list.
            if head.val >= x:
                rtail.next = head
                rtail = rtail.next
            # If the current node's value is less than x, add it to the 'left' list.
            else:
                ltail.next = head
                ltail = ltail.next
            
            # Move to the next node in the original linked list.
            head = head.next
        
        # Connect the 'left' and 'right' lists, making sure to set the tail of the 'right' list to None.
        ltail.next = right.next
        rtail.next = None
        
        # Return the combined linked list (nodes less than x followed by nodes greater than or equal to x).
        return left.next
