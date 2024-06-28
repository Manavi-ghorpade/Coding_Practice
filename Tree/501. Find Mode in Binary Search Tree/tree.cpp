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
    vector<int> vec;
    int count=0;
    int max=INT_MIN;
    int prev=0;
    void inorder(TreeNode* root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        if(prev==root->val) //already had same node value
        {
            ++count;
        }
        else   //new node with new value
        {
            count=1;
            prev=root->val;
        }
        if(max<count) //check if it is maximum than previous max
        {
            max=count;
            vec.clear();
            vec.push_back(root->val);
        }
        else if(max==count && vec.size()>0) //if same and we already had one element with same max value
        {
            vec.push_back(root->val); //if we don't add 2nd condition it will add first element again here because max==count for 1st element
            prev=root->val;
        }
        
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) 
    {
        inorder(root);
        return vec;
    }
};