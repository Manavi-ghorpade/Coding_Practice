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
class Solution 
{
public:
    int leftmostheight(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l = leftmostheight(root->left);
        return l+1;
    }
    int rightmostheight(TreeNode* root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int r = rightmostheight(root->right);
        return r+1;
    }
    int countNodes(TreeNode* root) 
    {
        
        if(root==nullptr)
        {
            return 0;
        }
        int left=leftmostheight(root);
        int right=rightmostheight(root);
        if(left==right)
        {
           return pow(2,left)-1;
        }
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};