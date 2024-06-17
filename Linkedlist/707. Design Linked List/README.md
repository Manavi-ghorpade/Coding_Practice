### Intuition:
The `MyLinkedList` class is designed to implement a doubly linked list where each node contains an integer value. The `Node` class represents a node in the linked list, and the `MyLinkedList` class provides methods to perform various operations on the linked list, such as adding and deleting nodes, as well as retrieving values at specific indices.

### Approach:
1. **Node Class**: Defines the structure of a node in the doubly linked list. Each node contains an integer value (`val`) and pointers to the next and previous nodes (`next` and `prev`).

2. **MyLinkedList Class**: Implements the doubly linked list using two pointers `left` and `right`, which represent the left and right sentinels of the list, respectively. These sentinels help simplify the implementation by providing boundary nodes.

   - **Constructor**: Initializes the left and right sentinels with dummy nodes having a value of 0. The `left` sentinel's `next` pointer points to the `right` sentinel, and the `right` sentinel's `prev` pointer points to the `left` sentinel.

   - **get Method**: Traverses the list starting from the `left` sentinel until the desired index is reached. Returns the value of the node at the specified index if found, otherwise returns -1.

   - **addAtHead Method**: Inserts a new node with the given value at the beginning of the list. Adjusts the pointers of adjacent nodes accordingly.

   - **addAtTail Method**: Inserts a new node with the given value at the end of the list. Adjusts the pointers of adjacent nodes accordingly.

   - **addAtIndex Method**: Inserts a new node with the given value at the specified index in the list. Adjusts the pointers of adjacent nodes accordingly.

   - **deleteAtIndex Method**: Deletes the node at the specified index in the list. Adjusts the pointers of adjacent nodes accordingly and deallocates the memory for the deleted node.

### Space Complexity:
- The space complexity of the `MyLinkedList` class is O(1) as it only uses a constant amount of extra space for maintaining pointers to the left and right sentinels.

### Time Complexity:
- **get Method**: O(n), where n is the number of nodes in the list, as it may require traversing the entire list to reach the desired index.
- **addAtHead Method**: O(1), as it simply inserts a new node at the beginning of the list without requiring traversal.
- **addAtTail Method**: O(1), as it simply inserts a new node at the end of the list without requiring traversal.
- **addAtIndex Method**: O(n), where n is the number of nodes in the list, as it may require traversing the list to reach the specified index.
- **deleteAtIndex Method**: O(n), where n is the number of nodes in the list, as it may require traversing the list to reach the specified index for deletion.