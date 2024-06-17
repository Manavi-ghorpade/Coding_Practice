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
    int numComponents(ListNode* head, vector<int>& nums)
    {
        unordered_set<int> s;
        for(int i=0;i<nums.size();++i)
        {
            s.insert(nums[i]);
        }
        bool com = false;
        int num = 0;
        // int i =0;
        while(head!=nullptr)
        {
            if(s.find(head->val) != s.end())
            {
                if(com == false)
                {
                    com = true;
                    num ++;
                }
            }
            else
            {
                com = false;
            }
            head = head->next;
        }
        return num;
    }
};