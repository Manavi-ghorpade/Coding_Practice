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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        
        ListNode* curr = head;
        while(k-1)
        {
            curr= curr->next;
            --k;
        }
        //two pointer 
        ListNode* right = curr;
        ListNode* left = head;
        while(right->next!=nullptr)
        {
            left = left->next;
            right = right->next;
        }
        int temp = curr->val;
        curr->val = left->val;
        left->val = temp;
        return head;
    }
};