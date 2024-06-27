# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def binaryTreePaths(self, root: Optional[TreeNode]) -> List[str]:
        result = []
        def ans(node,path):
            if node is None:
                return
            if node.left is None and node.right is None:
                path+=str(node.val)
                result.append(path)
                return
            path+=str(node.val)+"->"
            ans(node.left,path)
            ans(node.right,path)
        ans(root,"")
        return result