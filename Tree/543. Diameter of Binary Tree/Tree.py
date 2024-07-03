# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def __init__(self):
        self.Maxi = 0
        
    def height(self, root:Optional[TreeNode]) -> int: #calculate max height 
        if root is None:
            return 0
        if root.left is None and root.right is None:
            return 1
        left = self.height(root.left) //1
        right = self.height(root.right) //1
        self.Maxi = max(self.Maxi,left+right)
        return 1+max(left,right)

    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        self.height(root)
        return self.Maxi

        