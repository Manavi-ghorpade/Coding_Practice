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
    void ans(vector<string>& vec, string S,TreeNode* root )
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            //leaf
            S= S+ to_string(root->val);
            vec.push_back(S);
            return;
        }
        S+=to_string(root->val) + "->";
        ans(vec,S,root->left);
        ans(vec,S,root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) 
    {
        vector<string> vec;
        ans(vec, "", root);
        return vec;
    }
};