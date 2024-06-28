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

    bool isSameTree(TreeNode* p, TreeNode* q) 
    {
        if(p == NULL && q == NULL)
        {
            return true;
        }
        else if((p== NULL && q!=NULL)|| (p!=NULL && q==NULL)|| (p->val != q->val))
        {
            return false;
        }
        //issametree(1,1)
        //fun(2,null) --> return false
        //fun(null,2)-->return false 
        //  1
        // * *
        // 2  3
        // root 1,1
        // left 2,2 
        // left n,n ->true
        // right n,n ->true
        // right 3, 3 return true& true == true
        // left n,n -> true
        // right n,n ->true
        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
    }
};