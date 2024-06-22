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
    int minDepth(TreeNode* root) 
    {
        if(root == NULL)
        {
            return 0;
        }
        if(root->left==nullptr && root->right==nullptr)
        {
            return 1;
        }
        int left = root->left!=NULL ? minDepth(root->left): INT_MAX; //return 0  15->0
        int right = root->right!=NULL? minDepth(root->right): INT_MAX; //return 1 20 7->0 1
        return 1+min(left,right);
    }
};