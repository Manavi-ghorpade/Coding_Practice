# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def hasPathSum(self, root: Optional[TreeNode], targetSum: int, currentSum: int = 0) -> bool:
        if root is None:
            return False
        currentSum += root.val
        if root.left is None and root.right is None:  # leaf node
            return currentSum == targetSum
        return (self.hasPathSum(root.left, targetSum, currentSum) or
                self.hasPathSum(root.right, targetSum, currentSum)) 
