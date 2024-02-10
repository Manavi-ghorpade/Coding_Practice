class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) 
    {
        unordered_map<int,ListNode*> mp;
        ListNode* dummy = new ListNode(0,head);
        ListNode* curr = dummy;

        int sum =0;
        while(curr)
        {
            sum = sum+curr->val;
            mp[sum]=curr;
            curr=curr->next;
        }
        sum=0;
        curr = dummy;
        while(curr)
        {
            sum = sum+curr->val;
            curr->next=mp[sum]->next;
            curr= curr->next;
        }   
        return dummy->next;
    }
};