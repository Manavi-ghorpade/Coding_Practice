# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def leftheight(self, root:Optional[TreeNode])-> int:
        if(root==None):
            return 0
        return self.leftheight(root.left)+1

    def rightheight(self, root:Optional[TreeNode])->int:
        if(root==None):
            return 0
        return self.rightheight(root.right)+1

    def countNodes(self, root: Optional[TreeNode]) -> int:
        if(root==None):
            return 0
        left = self.leftheight(root)
        right = self.rightheight(root)
        if(left==right):
            return 2**left-1
        return 1+self.countNodes(root.left)+self.countNodes(root.right)
        