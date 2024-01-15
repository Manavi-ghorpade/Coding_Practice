/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

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
    // Function to convert a sorted linked list to a binary search tree
    TreeNode* sortedListToBST(ListNode* head) 
    {
        // Check if the linked list is empty
        if (head == NULL) {
            return NULL;
        }
        
        // Initialize pointers for finding the middle of the linked list
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* prev = head;
        
        // Find the middle of the linked list using the two-pointer technique
        while (fast && fast->next) {
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        
        // Disconnect the left part of the linked list to create a valid subtree
        if (prev != NULL) {
            prev->next = nullptr;
        }
        
        // Create a new TreeNode with the value of the middle node
        TreeNode* root = new TreeNode(slow->val);
        
        // Check if the middle node is the only node in the linked list
        if (slow == head) {
            return root;
        }
        
        // Recursively build the left and right subtrees
        root->left = sortedListToBST(head);
        root->right = sortedListToBST(slow->next);
        
        // Return the root of the binary search tree
        return root;
    }
};
