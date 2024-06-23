/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int sum=0;
    bool ans=false;
    bool hasPathSum(TreeNode* root, int targetSum) 
    {
        if(root==NULL)
        {
            return false;
        }
        if(root->left==NULL && root->right==NULL)
        {
            if(sum+root->val == targetSum)
            {
                ans = true;
            }
        }
        sum = sum+root->val;
        if(root->left!=NULL)
        {
            hasPathSum(root->left,targetSum);
        }
        if(root->right!=NULL)
        {
            hasPathSum(root->right,targetSum);
        }
        sum = sum-root->val;
        return ans;
    }
};