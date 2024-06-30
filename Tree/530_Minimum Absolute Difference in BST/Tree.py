# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
import sys
class Solution:
    def __init__(self):
        self.min_val = sys.maxsize
        self.prev = sys.maxsize

    def diff(self, root: Optional[TreeNode]):
        if root is None:
            return
        self.diff(root.left)
        self.min_val=min(self.min_val,abs(self.prev-root.val))
        self.prev=root.val
        #print(root.val)
        self.diff(root.right)

    def getMinimumDifference(self, root: Optional[TreeNode])->int:
        self.diff(root)
        return self.min_val
       