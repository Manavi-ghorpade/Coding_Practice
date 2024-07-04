# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeNodes(self, head: Optional[ListNode]) -> Optional[ListNode]:
        node = head.next
        prev = head 
        sum =0 
        while(node):
            if(node.val == 0):
                prev = prev.next
                prev.val = sum
                sum =0
            sum += node.val
            node = node.next
        prev.next=None
        return head.next

        
        