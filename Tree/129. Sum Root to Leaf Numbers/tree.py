# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def sumNumbers(self, root: Optional[TreeNode]) -> int:
        
        def preorder(root, num):
            if root is None:
                return 0
            num = num*10
            num += root.val
            if not root.left and not root.right: #leaf node
                return num
            left = preorder(root.left, num) #495 #495+491
            right = preorder(root.right, num) #491 #40
            return left+right # 495+491+40

        return preorder(root, 0)