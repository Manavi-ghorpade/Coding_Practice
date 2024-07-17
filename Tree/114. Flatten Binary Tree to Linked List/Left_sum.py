# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def flatten(self, root: Optional[TreeNode]) -> None:
        """
        Do not return anything, modify root in-place instead.
        root  -> left -> right
        first root we do. not need to change it
        then we need to flatten the left subtree and attach it to root
        then we need to flatten right subtree and attach it to left

        """
        #faltten the tree and return last node
        def dfs(root):
            if root is None:
                return None
            left_tail = dfs(root.left) #3 , 4
            right_tail = dfs(root.right) #4, 6
            # if left is empty then we don't have to do anything right is already flatten
            # both of them is empty we do not need to do anything
            if left_tail: #we have to do insert operation
                left_tail.right = root.right
                root.right = root.left
                root.left = None
            # if righttail is empty then tail is going to be the left tail
            # both left tail and right tail is null then tail is root
            last =  right_tail or left_tail or root
            return last
          
        dfs(root)