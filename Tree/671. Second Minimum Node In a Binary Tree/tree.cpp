class Solution {
public:
    void findSecond(TreeNode* root, int &min, int &second) {
        if (root == NULL) {
            return;
        }
        // If current node value is different from min and smaller than current second
        if (root->val != min && root->val < second) {
            second = root->val;
        }
        // Recursively search in the left and right subtrees
        findSecond(root->left, min, second);
        findSecond(root->right, min, second);
    }

    int findSecondMinimumValue(TreeNode* root) {
        int second = INT_MAX;
        bool no_second = false;

        // Check initial children of root for second minimum candidates
        if (root->left && root->val != root->left->val) {
            no_second = true;
            second = root->left->val;
        } else if (root->right && root->val != root->right->val) {
            no_second = true;
            second = root->right->val;
        }

        // Perform DFS to find the second minimum value
        findSecond(root, root->val, second);

        // If second remains INT_MAX and no second candidate was found initially, return -1
        if (second == INT_MAX && no_second == false) {
            second = -1;
        }
        return second;
    }
};