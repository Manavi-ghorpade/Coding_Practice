### Intuition

The function `findKthLargest` finds the k-th largest element in an array using a min-heap (priority queue). 

Here's a step-by-step breakdown:

1. **Min-Heap Initialization:** A min-heap (`priority_queue<int, vector<int>, greater<int>>`) is used to keep track of the k largest elements seen so far. The smallest element in the heap will be the k-th largest element in the array.

2. **Heap Construction:**
    - **Insertion:** Iterate through each element in the array and insert it into the min-heap.
    - **Heap Size Management:** If the size of the heap exceeds `k`, remove the smallest element from the heap. This ensures that the heap always contains the k largest elements encountered up to that point.

3. **Result Extraction:** After processing all elements, the top of the min-heap (`que.top()`) will be the k-th largest element, since the heap contains exactly the k largest elements and the smallest of these k elements is the k-th largest element in the entire array.

### Time Complexity

- **Insertion and Deletion in Heap:** Each insertion and deletion operation in a min-heap takes \(O(\log k)\) time. Since we perform these operations for each of the `n` elements in the array, the total time complexity is \(O(n \log k)\).

### Space Complexity

- The space complexity is \(O(k)\) because the heap contains at most `k` elements at any time.

### Summary

- **Intuition:** Use a min-heap to keep track of the k largest elements in the array. The top of the heap will be the k-th largest element.
- **Time Complexity:** \(O(n \log k)\) because each element is inserted into the heap and potentially causes a heap adjustment.
- **Space Complexity:** \(O(k)\) because the heap contains at most `k` elements.
