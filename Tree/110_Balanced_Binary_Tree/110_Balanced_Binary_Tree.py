# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    
    def isBalanced(self, root: Optional[TreeNode]) -> bool:
        def height(root):
            if not root:
                return [True,0] #base condition
            left, right = height(root.left), height(root.right) #go left the right
            balance = left[0] and right[0] and (abs(left[1]-right[1])<=1) #calculate weather its balanced for each node
            return [balance, 1+max(left[1],right[1])] #return the value i.e height to root node and true/false
        return height(root)[0]