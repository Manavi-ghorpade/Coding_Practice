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
    ListNode* oddEvenList(ListNode* head) 
    {
        ListNode* odd;
        ListNode* even;
        ListNode* headeve; // to track the even head
        if(head)
        {
            odd = head;
            even = head->next;
            headeve = even;
        }
        else
        {
            return head;
        }
        while(even && even->next)  // until even 
        {
                odd->next = even->next; //i.e odd->next->next
                odd = odd->next;  //new val
                even->next = odd->next; // i.e even->next->next
                even = even->next; 
        }
            odd->next = headeve;   //attach even head to it because odd->next is never null (beacuse of while loop)
        return head;
    }
};