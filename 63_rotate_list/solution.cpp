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
     * Function to rotate a linked list to the right by k places.
     * 
     * @param head: Pointer to the head of the linked list.
     * @param k: Number of places to rotate the linked list.
     * @return ListNode*: Pointer to the head of the rotated linked list.
     */
    ListNode* rotateRight(ListNode* head, int k) {
        // Initialize current pointer to head
        ListNode* curr = head;
        
        // Count the number of nodes in the linked list
        int num_nodes = 1;
        while (head && curr->next) {
            num_nodes++;
            curr = curr->next;
        }
        
        // If the linked list is empty or rotation is unnecessary, return the original head
        if (head == nullptr || k == 0 || k % num_nodes == 0 || k == num_nodes) {
            return head;
        }
        
        // Save the tail pointer
        ListNode* tail = curr;
      
        // If k is greater than the total number of nodes, take the modulo to find the effective rotation
        if (k > num_nodes) {
            k = k % num_nodes;
        }
        
        // Calculate the position of the last element in the first part of the rotated list
        int first_part = num_nodes - k - 1;
        
        // Reset current pointer to head
        curr = head;
        
        // Move the current pointer to the last element of the first part
        while (first_part) {
            curr = curr->next;
            first_part--;
        }
        
        // Save the pointer to the next element after rotation
        ListNode* next = curr->next;
        
        // Detach the first part from the rest of the list
        curr->next = nullptr;
        
        // Connect the tail to the original head, effectively rotating the list
        tail->next = head;
        
        // Update the head pointer to the new start of the rotated list
        head = next;
        
        // Return the head of the rotated list
        return head;
    }
};