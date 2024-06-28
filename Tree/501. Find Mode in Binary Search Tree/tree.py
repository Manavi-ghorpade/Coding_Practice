# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findMode(self, root: Optional[TreeNode]) -> List[int]:
        ans = []
        prev =0
        maximum =0
        count =0
        def inorder(root):
            nonlocal prev, maximum, count, ans
            if root is None:
                return
            inorder(root.left)
            if(prev == root.val):
                count+=1
            else:
                count=1
                prev=root.val
            if maximum<count:
                maximum=count
                ans.clear()
                ans.append(root.val)
            elif maximum==count and len(ans)>0:
                ans.append(root.val)
            inorder(root.right)
        inorder(root)
        return ans
        