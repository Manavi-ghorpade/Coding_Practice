/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    // Function to detect the start of a cycle in a linked list
    ListNode *detectCycle(ListNode *head) 
    {
        ListNode* slow = head; // Slow pointer initially at the head
        ListNode* fast = head; // Fast pointer initially at the head

        // First pass: Detect if there is a cycle and find the meeting point
        while(fast != nullptr && fast->next != nullptr)
        {
            slow = slow->next; // Move slow pointer one step
            fast = fast->next->next; // Move fast pointer two steps

            // Check if the pointers meet (cycle detected)
            if(slow == fast)
            {
                break;
            }
        }

        // If no cycle is detected, return nullptr
        if(fast == nullptr || fast->next == nullptr)
        {
            return nullptr;
        }

        // Second pass: Move one pointer to the head and find the start of the cycle
        slow = head; // Reset slow pointer to the head
        while(slow != fast)
        {
            slow = slow->next; // Move slow pointer one step
            fast = fast->next; // Move fast pointer one step
        }

        return slow; // Return the start of the cycle
    }
};
