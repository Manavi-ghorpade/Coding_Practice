### Intuition

The function `findKthLargest` finds the k-th largest element in an array using the Quickselect algorithm, which is a selection algorithm to find the k-th smallest or largest element in an unordered list. The Quickselect algorithm is similar to QuickSort. 

Here's a step-by-step breakdown:

1. **Convert k to 0-based index:** We convert `k` from the k-th largest to the corresponding k-th smallest by setting `k = len(nums) - k`.

2. **Quickselect Function:** The `quickselect` function is defined to recursively find the k-th smallest element.
    - **Pivot Selection:** The pivot is chosen as the last element in the current range (`nums[right]`).
    - **Partitioning:** We partition the array such that all elements less than or equal to the pivot are on the left of the pivot, and all elements greater than the pivot are on the right. We use a pointer `ptr` to track the boundary of elements less than or equal to the pivot.
    - **Recursive Search:** After partitioning, we check the position of the pivot:
        - If `ptr` is less than `k`, it means the k-th smallest element is in the right part of the array.
        - If `ptr` is greater than `k`, it means the k-th smallest element is in the left part of the array.
        - If `ptr` equals `k`, we have found the k-th smallest element.

3. **Return Result:** The function starts the Quickselect process from the entire array and returns the k-th smallest element, which corresponds to the k-th largest element in the original problem.

### Time Complexity

- **Average Case:** The average time complexity of Quickselect is \(O(n)\), where \(n\) is the number of elements in the array. This is because each partitioning step roughly divides the problem size in half, similar to QuickSort.
  
- **Worst Case:** The worst-case time complexity is \(O(n^2)\). This happens when the pivot chosen is always the smallest or largest element, leading to unbalanced partitions. However, this is rare in practice, especially if the pivot is chosen randomly or using the median-of-medians technique.

### Space Complexity

- The space complexity is \(O(1)\) because the algorithm is in-place and uses only a constant amount of extra space. The recursion depth is \(O(\log n)\) on average due to the partitioning process but can go up to \(O(n)\) in the worst case.

### Summary

- **Intuition:** Use Quickselect to find the k-th largest element by partitioning the array and recursively narrowing down the search space.
- **Time Complexity:** \(O(n)\) on average, \(O(n^2)\) in the worst case.
- **Space Complexity:** \(O(1)\), since the algorithm operates in-place.