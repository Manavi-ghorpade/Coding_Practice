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
    ListNode* swapPairs(ListNode* head) 
    {
        // Create a dummy node to simplify the code
        ListNode* dummy = new ListNode(0, head);
        // Initialize pointers for swapping
        ListNode* prev = dummy;
        ListNode* curr = head;

        // Swap pairs as long as there are at least two nodes left
        while (curr != nullptr && curr->next != nullptr)
        {
            // Nodes to be swapped
            ListNode* next_node = curr->next;
            ListNode* futureNext = next_node->next;

            // Perform the swap
            next_node->next = curr;
            prev->next = next_node;
            curr->next = futureNext;

            // Move pointers for the next iteration
            prev = curr;
            curr = futureNext;
        }

        // Return the new head after swapping pairs
        return dummy->next;
    }
};
