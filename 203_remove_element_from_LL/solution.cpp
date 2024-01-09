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
    /**
     * Remove all nodes with a given value from the linked list.
     * @param head The head of the linked list.
     * @param val The value to be removed.
     * @return The head of the modified linked list.
     */
    ListNode* removeElements(ListNode* head, int val) {
        // Initialize pointers
        ListNode* curr = head;
        ListNode* dummy = new ListNode(0, head);
        ListNode* prev = dummy;

        // Iterate through the linked list
        while (curr) {
            // Check if the current node's value matches the target value
            if (curr->val == val) {
                // Remove the current node by updating the previous node's next pointer
                prev->next = curr->next;
            } else {
                // Move the previous pointer to the current node
                prev = curr;
            }

            // Move to the next node
            curr = curr->next;
        }

        // Return the modified linked list
        return dummy->next;
    }
};
