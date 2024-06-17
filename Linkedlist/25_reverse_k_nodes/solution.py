# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def reverseKGroup(self, head, k):
        """
        :type head: ListNode
        :type k: int
        :rtype: ListNode
        """
        dummy = ListNode(0, head)
        prevgroup = dummy
        while True:
            kele= self.knode(prevgroup, k)
            if(kele == None):
                break
            groupnext = kele.next
            current = prevgroup.next
            prev = kele.next
            while(current != groupnext):
                nextnode = current.next
                current.next = prev
                prev = current
                current = nextnode
            temp = prevgroup.next
            prevgroup.next = prev
            prevgroup = temp
        return dummy.next

    def knode(self, head,k ):
        while(k and head):
            head=head.next
            k-=1
        return head
        