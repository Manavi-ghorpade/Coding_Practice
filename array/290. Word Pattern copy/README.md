### Intuition:
The task is to summarize a sorted list of integers into ranges. If consecutive integers appear sequentially in the input list, they should be summarized as a range from the first integer to the last. Otherwise, each single integer forms its own range.

### Approach:
1. **Iterating Through the Input List**: We iterate through the input list of integers `nums`.
2. **Checking Consecutive Integers**: For each integer `nums[i]`, we check if the next integer (`nums[i+1]`) is consecutive to it.
3. **Building Ranges**: If the next integer is consecutive, we continue checking. If it's not consecutive, we build a range from the first integer encountered so far (`first`) to the current integer (`nums[i]`). If `first` and `last` are the same, it indicates a single integer range; otherwise, it's a range from `first` to `last`.
4. **Edge Cases**: We handle edge cases when processing the first and last elements of the list to ensure correct range construction.
5. **Returning the Result**: We return the vector `ans` containing the summarized ranges.

### Complexity:
- **Time Complexity**: 
  - The algorithm iterates through the list once, so the time complexity is O(n), where n is the number of elements in the input list `nums`.
- **Space Complexity**:
  - The space complexity is O(n) as well. The additional space is used to store the resulting ranges in the vector `ans`, which could potentially contain all elements from the input list.### Intuition:
The task is to summarize a sorted list of integers into ranges. If consecutive integers appear sequentially in the input list, they should be summarized as a range from the first integer to the last. Otherwise, each single integer forms its own range.

### Approach:
1. **Iterating Through the Input List**: We iterate through the input list of integers `nums`.
2. **Checking Consecutive Integers**: For each integer `nums[i]`, we check if the next integer (`nums[i+1]`) is consecutive to it.
3. **Building Ranges**: If the next integer is consecutive, we continue checking. If it's not consecutive, we build a range from the first integer encountered so far (`first`) to the current integer (`nums[i]`). If `first` and `last` are the same, it indicates a single integer range; otherwise, it's a range from `first` to `last`.
4. **Edge Cases**: We handle edge cases when processing the first and last elements of the list to ensure correct range construction.
5. **Returning the Result**: We return the vector `ans` containing the summarized ranges.

### Complexity:
- **Time Complexity**: 
  - The algorithm iterates through the list once, so the time complexity is O(n), where n is the number of elements in the input list `nums`.
- **Space Complexity**:
  - The space complexity is O(n) as well. The additional space is used to store the resulting ranges in the vector `ans`, which could potentially contain all elements from the input list.