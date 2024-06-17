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
    ListNode* reverseBetween(ListNode* head, int left, int right) 
    {
        // Check if no reversal is needed (left and right are the same)
        if(left == right)
        {
            return head;
        }
        
        // Calculate the length of the subsequence to be reversed
        int diff = (right - left) + 1;
        
        // Pointers to track nodes before, during, and after the reversal
        ListNode* before_list;
        ListNode* next;
        
        // Create a dummy node and set it as the new head of the list
        ListNode* dummy = new ListNode(-1, head);
        head = dummy;
        
        // Move to the node at index 'left' in the list
        while(left)
        {
            before_list = head;
            head = head->next;
            left--;
        }
        
        // Store the current node at index 'left'
        ListNode* l = head;
        ListNode* prev = nullptr;
        
        // Reverse the subsequence
        while(diff)
        {
           next = head->next;
           head->next = prev;
           prev = head;
           head = next;
           diff--;
        }
        
        // Connect the reversed subsequence back to the original list
        before_list->next = prev;
        l->next = head;
        
        // Return the modified list starting from the dummy's next node
        return dummy->next;
    }
};