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
    int length =0 ;
    ListNode* start;
    Solution(ListNode* head)
     {
        start = head;
        while(head). //calculate length of linked list
        {
            length ++;
            head = head->next;
        }
    }
    int getRandom() 
    {
        ListNode*  curr = start;
        int random = rand()%length;  //generate random index from length
        while(random) //travel until that index node
        {
            curr = curr->next;
            -- random;
        }
        return curr->val; //return that node
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */


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
    vector <int> num;
    Solution(ListNode* head) {
        while(head) //add node values to vector
        {
            num.push_back(head->val);
            head= head->next;
        }
    }
    
    int getRandom() {
        int random = rand();
        int id = random % num.size(); //generate random index
        return num[id]; //return value at that node
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */