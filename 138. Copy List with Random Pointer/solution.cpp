/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    // Function to copy a linked list with random pointers
    Node* copyRandomList(Node* head) 
    {
        // Map to store the mapping between original nodes and their copies
        unordered_map<Node*, Node*> mp;
        
        // First pass: Create new nodes and store the mapping
        Node* curr = head;
        while (curr) {
            // Create a new node with the same value
            Node* new_node = new Node(curr->val);
            
            // Store the mapping between original and new nodes
            mp[curr] = new_node;
            
            // Move to the next node in the original list
            curr = curr->next; 
        }
        
        // Second pass: Connect the copied nodes with next and random pointers
        curr = head;
        while (curr) {
            // Connect the next and random pointers of the copied nodes
            mp[curr]->random = mp[curr->random];
            mp[curr]->next = mp[curr->next];
            
            // Move to the next node in the original list
            curr = curr->next;
        }
        
        // Return the head of the copied linked list
        return mp[head];
    }
};