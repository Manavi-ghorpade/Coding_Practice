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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
    {
      // Stacks to store the digits of each linked list
      stack<int> nums1;
      stack<int> nums2;
      
      // Pointers to traverse the input linked lists
      ListNode* h1 = l1;
      ListNode* h2 = l2;
      
      // Push digits of the first linked list onto stack nums1
      while(h1)
      {
          nums1.push(h1->val);
          h1=h1->next;
      }
      
      // Push digits of the second linked list onto stack nums2
      while(h2)
      {
           nums2.push(h2->val);
           h2=h2->next;
      }
      
      // Pointer to the result linked list (in reverse order)
      ListNode* prev = nullptr;
      
      // Variable to keep track of the carry
      int carry = 0;
      
      // Process digits until both stacks are empty and there is no carry
      while(!nums1.empty() || !nums2.empty() || carry)
      {
          // Calculate the sum of digits and carry
          int sum = (nums1.empty()? 0 :nums1.top()) +(nums2.empty() ? 0:nums2.top()) + carry;
          carry = sum/10;
          
          // Create a new node with the sum % 10
          ListNode* newNode = new ListNode(sum % 10);
          
          // Update the next pointer of the new node
          newNode->next = prev;
          
          // Update the previous pointer to the new node
          prev = newNode;
          
          // Pop the top elements from the stacks if they are not empty
          if (!nums1.empty()) nums1.pop();
          if (!nums2.empty()) nums2.pop();
      }
      
      // Return the head of the result linked list
      return prev;
    }
};
      