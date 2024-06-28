# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    sum =0
    def sumOfLeftLeaves(self, root: Optional[TreeNode]) -> int:
        def sumleft(root)->int:
            if root.left:
                if root.left.left is None and root.left.right is None:
                    return root.left.val
            return 0

        if root is None:
            return 0
        return sumleft(root)+self.sumOfLeftLeaves(root.left) + self.sumOfLeftLeaves(root.right) 
        

       
            


        