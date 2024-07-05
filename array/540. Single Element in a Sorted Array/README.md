### Intuition
The problem requires finding the single element in a sorted array where every element appears twice except for one. The array's sorted nature can be leveraged to solve this problem efficiently using binary search.

### EXPLANATION:-
Suppose array is [1, 1, 2, 2, 3, 3, 4, 5, 5]
we can observe that for each pair, 
first element takes even position and second element takes odd position
for example, 1 is appeared as a pair,
so it takes 0 and 1 positions. similarly for all the pairs also.

this pattern will be missed when single element is appeared in the array.

From these points, we can implement algorithm.
1. Take left and right pointers . 
    left points to start of list. right points to end of the list.
2. find mid.
    if mid is even, then it's duplicate should be in next index.
	or if mid is odd, then it's duplicate  should be in previous index.
	check these two conditions, 
	if any of the conditions is satisfied,
	then pattern is not missed, 
	so check in next half of the array. i.e, left = mid + 1
	if condition is not satisfied, then the pattern is missed.
	so, single number must be before mid.
	so, update end to mid.
3. At last return the nums[left]

### Approach
1. **Initialization**: 
   - Set `left` to 0 and `right` to the last index of the array.
   
2. **Binary Search**:
   - Calculate `mid` as the middle index of the current search range.
   - Determine if the middle element is part of a pair:
     - If `mid` is even and `nums[mid] == nums[mid + 1]`, the single element must be to the right of `mid`.
     - If `mid` is odd and `nums[mid] == nums[mid - 1]`, the single element must be to the right of `mid`.
   - Otherwise, the single element is to the left of `mid`.
   - Adjust `left` and `right` accordingly to narrow the search range.
   
3. **Termination**:
   - The loop terminates when `left` equals `right`, meaning the single element is found.
   - Return the element at index `left`.

### Time Complexity
- **O(log n)**: The binary search divides the search range in half each iteration, resulting in logarithmic time complexity.

### Space Complexity
- **O(1)**: The algorithm uses a constant amount of extra space for variables.
