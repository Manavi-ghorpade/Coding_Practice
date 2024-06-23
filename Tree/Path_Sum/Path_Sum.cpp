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
        if(root->left==NULL && root->right==NULL) //leaf node
        {
            if(sum+root->val == targetSum) //if sum match then set ans to true
            {
                ans = true;
            }
        }
        sum = sum+root->val; //do addition of node value to variable
        hasPathSum(root->left,targetSum);
        hasPathSum(root->right,targetSum);
        sum = sum-root->val; //remove variable from sum as we are backtracking
        return ans;
    }
};