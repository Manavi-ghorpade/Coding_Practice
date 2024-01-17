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
    // Function to convert a binary linked list to decimal
    int getDecimalValue(ListNode* head) 
    {
        int length = 0; // Variable to store the length of the linked list
        int ans = 0;    // Variable to store the decimal result
        ListNode* curr = head; // Pointer to traverse the linked list
        
        // First pass: Calculate the length of the linked list
        while(curr)
        {
            length++;
            curr = curr->next; 
        }
        length--; // Adjust length to start from the most significant bit

        // Second pass: Convert binary linked list to decimal
        while(head)
        {
            if(head->val == 1)
            {
                // Update the result using the binary-to-decimal conversion
                ans = ans + pow(2, length);
            }
            length--; // Move to the next bit
            head = head->next; // Move to the next node in the linked list
        } 
        return ans; // Return the decimal result  
    }
};
