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
    ListNode* mergeNodes(ListNode* head) 
    {
        ListNode* node = head->next;
        ListNode* prev = head;
        int sum =0;
        while(node)
        {
            sum += node->val; 
            if(node->val == 0)
            {
                prev = prev->next;
                prev->val = sum;
                sum = 0;
            }
            node = node->next;
        } 
        prev->next = NULL;  
        return head->next;
    }
};