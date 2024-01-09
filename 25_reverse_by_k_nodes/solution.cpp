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
     * Helper function to get the kth node from the current position.
     * @param head The starting node.
     * @param k The number of nodes to move forward.
     * @return The kth node from the current position.
     */
    ListNode* getKth(ListNode* head, int k)
    {
        while(k && head)
        {
            head = head->next;
            k--;
        }
        return head;
    }

    /**
     * Reverses nodes in groups of k in a given linked list.
     * @param head The head of the linked list.
     * @param ki The size of each group.
     * @return The head of the modified linked list.
     */
    ListNode* reverseKGroup(ListNode* head, int ki) 
    {
        // Create a dummy node to simplify edge case handling.
        ListNode* dummy = new ListNode(0, head);
        // Pointer to keep track of the previous group.
        ListNode* prevgroup = dummy;

        // Continue until there are no more groups of size ki.
        while(true)
        {
            // Get the kth node from the current position.
            ListNode* k = getKth(prevgroup, ki);

            // If k is null, there are no more groups of size ki.
            if(k == nullptr)
            {
                break;
            }

            // Save the next node after the current group.
            ListNode* groupnext =  k->next;
            // Initialize pointers for reversing the group.
            ListNode* current = prevgroup->next;
            ListNode* prev = k->next;

            // Reverse the group of size ki.
            while(current != groupnext)
            {
                ListNode* next = current->next;
                current->next = prev;
                prev = current;
                current = next;
            }

            // Connect the reversed group to the previous group.
            ListNode* newprevgroup =  prevgroup->next;
            prevgroup->next = k;
            // Move the pointer to the next group.
            prevgroup = newprevgroup;
        }

        // Return the head of the modified linked list.
        return dummy->next;
    }
};