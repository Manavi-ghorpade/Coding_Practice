class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        # Create a hash map to quickly find the index of a value in the inorder list
        hash_map = {v: i for i, v in enumerate(inorder)}
        # Create an index pointer for preorder traversal
        self.preorder_idx = 0
        
        def helper(l, r):
            # Base case: if the left index exceeds the right, there's no subtree to form
            if l > r:
                return None
            
            # The current root is the next element in the preorder list
            root_val = preorder[self.preorder_idx]
            root = TreeNode(root_val)
            
            # Increment the preorder index
            self.preorder_idx += 1
            
            # Get the index of the root in the inorder list
            mid = hash_map[root_val]
            
            # Recursively build the left and right subtrees
            root.left = helper(l, mid - 1)
            root.right = helper(mid + 1, r)
            
            return root
        
        # Start with the entire range of the inorder list
        return helper(0, len(inorder) - 1)