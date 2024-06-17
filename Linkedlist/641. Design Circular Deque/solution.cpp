class LinkedNode
{
public:
    int val;
    LinkedNode* next;
    LinkedNode* prev;
    LinkedNode(int value)
    {
        this->val = value;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

class MyCircularDeque 
{
public:
    int current_size = 0;  // Current number of elements in the deque
    int max_size;          // Maximum capacity of the deque
    LinkedNode* dummy;     // Dummy node to simplify insertion and deletion
    LinkedNode* last_pointer; // Pointer to the last node in the deque

    MyCircularDeque(int k) 
    {
        max_size = k;
        dummy = new LinkedNode(-1);  // Dummy node initialization
        last_pointer = nullptr;      // Last pointer initialization
    }
    
    // Method to insert an element at the front of the deque
    bool insertFront(int value) 
    {
        // If deque is full, return false
        if(current_size == max_size)
        {
            return false;
        }
        // If deque is empty, create a new node and update pointers
        else if(current_size == 0)
        {
            LinkedNode* new_node = new LinkedNode(value);
            dummy->next = new_node;
            new_node->prev = dummy;
            last_pointer = new_node; 
            current_size++;
        }
        // Otherwise, insert a new node at the front and update pointers
        else
        {
            LinkedNode* new_node = new LinkedNode(value);
            LinkedNode* next = dummy->next;
            dummy->next = new_node;
            new_node->prev = dummy;
            new_node->next = next;
            next->prev = new_node;
            current_size++;
        }
        return true;
    }
    
    // Method to insert an element at the back of the deque
    bool insertLast(int value) 
    {
        // If deque is full, return false
        if(current_size == max_size)
        {
            return false;
        }
        // If deque is empty, create a new node and update pointers
        else if(current_size == 0)
        {
            LinkedNode* new_node = new LinkedNode(value);
            dummy->next = new_node;
            new_node->prev = dummy;
            last_pointer = new_node; 
            current_size++;
        }
        // Otherwise, insert a new node at the back and update pointers
        else
        {
            LinkedNode* new_node = new LinkedNode(value);
            last_pointer->next = new_node;
            new_node->prev = last_pointer; 
            last_pointer = new_node; 
            current_size++;
        }
        return true;
    }
    
    // Method to delete an element from the front of the deque
    bool deleteFront() 
    {
        // If deque is not empty
        if(dummy->next)
        {
            // If the first node is also the last node, update last pointer
            if(dummy->next == last_pointer)
            {
                last_pointer = last_pointer->next;
            }
            // Update pointers and decrease current size
            dummy->next = dummy->next->next;
            if(dummy->next)
            {
                dummy->next->prev = dummy;
            }
            current_size--;
            return true;
        } 
        else
        {
            // If deque is empty, return false
            return false;
        }
    }
    
    // Method to delete an element from the back of the deque
    bool deleteLast() 
    {
        // If deque is not empty
        if(last_pointer)
        {
            // If the last node is also the first node, update first pointer
            if(dummy->next == last_pointer)
            {
                last_pointer = last_pointer->next;
                dummy->next = last_pointer;
            }
            // Update pointers and decrease current size
            else
            {
                last_pointer = last_pointer->prev;
                last_pointer->next = nullptr;
            }
            current_size--;
            return true;
        }
        else
        {
            // If deque is empty, return false
            return false;
        }
    }
    
    // Method to get the value of the front element of the deque
    int getFront() 
    {
        // If deque is not empty, return the value of the first node
        if(dummy->next)
        {
            return dummy->next->val;
        }
        else
        {
            // If deque is empty, return -1
            return -1;
        }
    }
    
    // Method to get the value of the rear element of the deque
    int getRear() 
    {
        // If deque is not empty, return the value of the last node
        if(last_pointer)
        {
            return last_pointer->val;
        }   
        else
        {
            // If deque is empty, return -1
            return -1;
        }
    }
    
    // Method to check if the deque is empty
    bool isEmpty() 
    {
        // If current size is 0, deque is empty
        if(current_size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    // Method to check if the deque is full
    bool isFull() 
    {
        // If current size is equal to max size, deque is full
        if(current_size == max_size)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */