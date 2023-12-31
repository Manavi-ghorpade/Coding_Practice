# 9. Palindrome Number
Given an integer x, return true if x is a palindrome and false otherwise.

Input: x = 121

Output: true

Explanation: 121 reads as 121 from left to right and from right to left.

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The goal is to determine whether a given integer is a palindrome (reads the same forward as backward). Negative numbers are not palindromes, and for positive numbers, reversing the digits and comparing with the original can determine if it's a palindrome.
# Approach
<!-- Describe your approach to solving the problem. -->
1. If the input is negative, return false, as negative numbers cannot be palindromes.
2. Initialize `result` to 0 and `original` to the input value for comparison later.
3. Use a loop to extract the last digit of the input, build the reversed number (`result`), and move to the next digit until the input becomes 0.
4. Check if the reversed number (`result`) is equal to the original input. If yes, return true; otherwise, return false.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity is O(log10(x)), where x is the input integer. This is because the loop runs for the number of digits in x.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity is O(1), as only a constant amount of extra space is used, regardless of the input size.
