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
    ListNode* middleNode(ListNode* head) 
    {
        // Initialize two pointers, slow and fast, both starting at the head of the linked list.
        ListNode* slow = head;
        ListNode* fast = head;

        // Iterate through the linked list while the fast pointer and its next node are not null.
        //check Null first
        while (fast && fast->next)
        {
            // Move the slow pointer one step forward.
            slow = slow->next;
            // Move the fast pointer two steps forward.
            fast = fast->next->next;
        }

        // At this point, the slow pointer is at the middle node of the linked list.
        // Return the middle node.
        return slow;
    }
};
