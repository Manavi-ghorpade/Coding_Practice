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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        // Create a dummy node to simplify handling of edge cases
        ListNode* dummy = new ListNode(0, head);
        
        ListNode* left = dummy; // Pointer to the node before the one to be removed
        ListNode* right = head; // Pointer to the end of the list

        // Move the right pointer n nodes ahead
        while (n && right) {
            right = right->next;
            --n;
        }

        // Move both pointers until the right pointer reaches the end
        while (right) {
            left = left->next;
            right = right->next;
        }

        // Remove the N-th node from the end
        left->next = left->next->next;

        return dummy->next; // Return the modified list
    }
};