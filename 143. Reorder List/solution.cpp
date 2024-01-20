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
    void reorderList(ListNode* head) 
    {
        //Find the middle 
        ListNode* slow = head;
        ListNode* fast = head;
        ListNode* brk = head;;
        while(fast!=nullptr && fast->next!=nullptr)
        {
            brk = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        brk->next = nullptr;
        //reverse linked list from middle
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        while(slow)
        {
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        //reorder list
        // prev is goining to be the last node of list
        ListNode* list1_next=nullptr;
        ListNode* list2_next= nullptr;
        while(prev!=nullptr && head!=nullptr)
        {
            list1_next = head->next;
            list2_next = prev->next;
            head->next = prev;
            //odd length list
            if(list1_next == nullptr && list2_next!=nullptr)
            {
                prev->next = list2_next;
            }
            else
            {
                prev->next = list1_next;

            }
            head= list1_next;
            prev= list2_next;
        }
        
    }
};