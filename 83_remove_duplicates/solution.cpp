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

 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) 
    {
        // Create a dummy node to simplify the code
        ListNode* dummy = new ListNode(-101, head);
        // Initialize pointers for traversal and deletion
        ListNode* prev = dummy;
        ListNode* curr = head; 

        // Traverse the linked list
        while (curr != nullptr)
        {
            // Check if the current node has a duplicate value with the previous node
            if (prev->val == curr->val)
            {
                // Skip the current node by adjusting the pointers
                prev->next = curr->next;
                curr = prev->next;
            }
            else
            {
                // Move pointers to the next pair of nodes
                prev = curr;
                curr = curr->next;
            }
        }

        // Return the head of the modified list
        return dummy->next;
    }
};
