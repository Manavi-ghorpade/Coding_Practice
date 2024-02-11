class Node{
public:
int val;
Node* next;
Node* prev;
Node(int val)
{
    this->val = val;
    this->next = nullptr;
    this->prev = nullptr;
}
};
class MyLinkedList {

public:
    Node* left;
    Node* right;
    MyLinkedList() 
    {
        left = new Node(0);
        right = new Node(0);
        left->next = right;
        right->prev =left;
    }
    
    int get(int index) 
    {
        Node* curr = left->next;
        while(curr && index)
        {
            curr = curr->next;
            --index;
        }
        if(index == 0 && curr!=right && curr)
        {
            return curr->val;
        }
        else
        {
            return -1;
        }
    }
    
    void addAtHead(int val) 
    {
        Node* new_node = new Node(val);
        Node* next = left->next; 
        left->next = new_node;
        new_node->prev = left;
        new_node->next = next;
        next->prev = new_node;
    }
    
    void addAtTail(int val) 
    {
        Node* new_node = new Node(val);
        Node* prev = right->prev;
        prev->next = new_node;
        new_node->prev = prev;
        new_node->next = right;
        right->prev = new_node;
    }
    
    void addAtIndex(int index, int val) 
    {
        Node* curr = left->next;
        while(curr && index)
        {
            --index;
            curr = curr->next;
        }
        if(curr && index == 0)
        {
            // Node* next = curr;
            Node* new_node = new Node(val);
            Node* prev = curr->prev;
            prev->next = new_node;
            new_node->prev = prev;
            new_node->next = curr;
            curr->prev = new_node;
        }
    }
    
    void deleteAtIndex(int index) 
    {
        Node* curr = left->next;
        while(curr && index)
        {
            --index;
            curr = curr->next;
        }
        if(curr && index == 0 && curr!=right)
        {
            Node* prev = curr->prev;
            Node* next = curr->next;
            prev->next = next;
            next->prev = prev;
            delete curr;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */