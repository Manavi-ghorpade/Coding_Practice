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
    // Function to partition a linked list into two parts based on a given value x.
    ListNode* partition(ListNode* head, int x) 
    {
        // Create two new linked lists to store nodes less than and greater than x.
        ListNode* right = new ListNode();  // List for nodes >= x
        ListNode* left = new ListNode();   // List for nodes < x
        
        // Pointers to the tails of the new linked lists.
        ListNode* rtail = right;
        ListNode* ltail = left; 
        
        // Iterate through the original linked list.
        while (head)
        {
            // If the current node's value is greater than or equal to x, add it to the 'right' list.
            if (head->val >= x)
            {
                rtail->next = head;
                rtail = rtail->next;
            }
            // If the current node's value is less than x, add it to the 'left' list.
            else
            {
                ltail->next = head;
                ltail = ltail->next;
            }
            // Move to the next node in the original linked list.
            head = head->next;
        }
        
        // Connect the 'left' and 'right' lists, making sure to set the tail of the 'right' list to NULL.
        ltail->next = right->next;
        rtail->next = NULL;
        
        // Return the combined linked list (nodes less than x followed by nodes greater than or equal to x).
        return left->next; 
    }
};
