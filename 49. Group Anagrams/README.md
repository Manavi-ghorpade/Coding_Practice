### Intuition:
An anagram is a word or phrase formed by rearranging the letters of another word or phrase. In this problem, we need to group together strings that are anagrams of each other.

### Approach:
1. **HashMap to Group Anagrams**: We'll use an unordered map (`mp`) where the keys are sorted strings (representing anagrams), and the values are vectors of strings containing the original strings that are anagrams of each other.
2. **Sorting Strings**: For each string in the input vector `strs`, we'll sort its characters alphabetically. This ensures that all anagrams of a particular string will have the same sorted representation.
3. **Mapping and Grouping**: We'll add the sorted string to the map `mp` and then push the original string into the vector associated with the sorted string key.
4. **Preparing Result Vector**: After processing all strings, we'll iterate through the map and push the vectors of anagrams into the result vector `ans`.
5. **Returning Result**: Finally, we return the result vector `ans` containing groups of anagrams.

### Complexity:
- **Time Complexity**: 
  - Sorting each string takes O(k * log(k)) time, where k is the length of the longest string. This operation is performed for each of the n strings in the input vector `strs`. Thus, the overall time complexity is O(n * k * log(k)).
- **Space Complexity**:
  - We use additional space for the unordered map `mp` to store groups of anagrams. The space required depends on the number of unique anagram groups formed, which could be up to the size of the input vector `strs`. Therefore, the space complexity is O(n).