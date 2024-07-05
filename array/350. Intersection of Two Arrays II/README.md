### Intuition

The goal of this function is to find the intersection of two arrays, `nums1` and `nums2`, which means it will return a list containing all elements that appear in both arrays. Each element in the intersection should appear as many times as it shows in both arrays.

### approach 
To achieve this, the algorithm uses a hashmap (or dictionary) to count the occurrences of each element in `nums1`. Then, it iterates through `nums2`.
1. We will iterate through nums1 and store the count of each unique element in hashmap
2. We will iterate through nums2, check weather element is present in hashmap
3. If present we check count > 0 , because whenever we find element in hashmap we will decrement the count by 1. so we can calculate exact number of times each element present in both arrays. 
4. Add element to hashmap and then decrement the count
5. Return ans array


### Time Complexity

The time complexity of the solution is \(O(n + m)\), where \(n\) is the length of `nums1` and \(m\) is the length of `nums2`.

- Building the hashmap from `nums1` takes \(O(n)\) time.
- Iterating through `nums2` and checking/updating the hashmap takes \(O(m)\) time.

Overall, the operations are linear in terms of the combined size of the two arrays.

### Space Complexity

The space complexity is \(O(n)\) where \(n\) is the length of `nums1`.

- The hashmap stores up to \(n\) unique elements from `nums1`.

The result list `ans` is not considered additional space because it is the output of the function.