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
    // Function to delete duplicates from a sorted singly-linked list.
    ListNode* deleteDuplicates(ListNode* head) 
    {
        // Creating a dummy node to simplify edge case handling.
        ListNode* dummy = new ListNode(-1, head);
        
        // Pointer to keep track of the previous node.
        ListNode* prev = dummy;
        
        // Variable to track if a duplicate match has been found.
        bool match = false;
        
        // Loop through the linked list until the end.
        while (head && head->next)
        {
            // Check if the current node's value is the same as the next node's value.
            if (head->val == head->next->val)
            {
                // Set match to true if a duplicate is found.
                match = true;
            }
            // Check if the current node's value is different from the next node's value
            // and a match was found in the previous iteration.
            else if (head->val != head->next->val && match == true) 
            {
                // Reset match to false and update the previous node's next pointer.
                match = false;
                prev->next = head->next; 
            }
            // Check if the current node's value is different from the next node's value
            // and no match was found in the previous iteration.
            else if (head->val != head->next->val && match == false) 
            {
                // Update the previous node to the current node.
                prev = head;
            }
            
            // Move to the next node in the linked list.
            head = head->next;
        }
        if(match == true && head!=NULL)
        {
            prev->next = NULL;
        }
        // Return the modified linked list (excluding duplicates).
        return dummy->next;   
    }
};