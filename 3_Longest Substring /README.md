# 3. Longest Substring Without Repeating Characters
Given a string s, find the length of the longest 
substring  without repeating characters.

Input: s = "abcabcbb"

Output: 3

Explanation: The answer is "abc", with the length of 3.

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem asks for the length of the longest substring without repeating characters in a given string. To solve this, we need to find the maximum length of a contiguous substring in which no character is repeated.
# Approach
<!-- Describe your approach to solving the problem. -->
1. Initialize two pointers, `l` and `h`, representing the left and right boundaries of the current substring.
2. Use a set (`st`) to keep track of unique characters in the current substring.
3. Iterate through the string using the high pointer (`h`).
4. If the character at index `h` is not in the set, add it to the set and update the maximum length (`ans`) with the length of the current substring (`h - l + 1`).
5. If the character at index `h` is already in the set, remove the character at index `l` from the set and increment `l` until the set no longer contains the repeated character.
6. Continue this process, updating the maximum length during each iteration.
7. The final `ans` will be the length of the longest substring without repeating characters.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity is O(n), where n is the length of the input string. Both pointers (l and h) traverse the string only once.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity is O(min(n, m)), where n is the length of the input string, and m is the size of the character set (number of unique characters). 
