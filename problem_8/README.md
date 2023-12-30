# PROBLEM 8 - String to integer (atoi)
Implement the myAtoi(string s) function, which converts a string to a 32-bit signed integer (similar to C/C++'s atoi function).

The algorithm for myAtoi(string s) is as follows:

1. Read in and ignore any leading whitespace.
2. Check if the next character (if not already at the end of the string) is '-' or '+'. Read this character in if it is either. This determines if the final result is negative or positive respectively. Assume the result is positive if neither is present.
3. Read in next the characters until the next non-digit character or the end of the input is reached. The rest of the string is ignored.
4. Convert these digits into an integer (i.e. "123" -> 123, "0032" -> 32). If no digits were read, then the integer is 0. Change the sign as necessary (from step 2).
5. If the integer is out of the 32-bit signed integer range [-231, 231 - 1], then clamp the integer so that it remains in the range. Specifically, integers less than -231 should be clamped to -231, and integers greater than 231 - 1 should be clamped to 231 - 1.
6. Return the integer as the final result.
# Intuition

The goal of the 'myAtoi'  function is to convert a given string to an integer. The function needs to handle leading whitespaces, determine the sign of the integer, and convert consecutive digits into the actual integer value. Additionally, it should check for integer overflow and clamp the result within the 32-bit signed integer range.

# Approach


1. **Skip Leading Whitespace:**
   Use a while loop to skip leading whitespaces in the input string. Increment the index `j` until a non-whitespace character is encountered.

2. **Determine Sign:**
   Check the character at index `j` to determine the sign of the integer. Update the `result` variable accordingly. If a '-' is encountered, set `result` to -1; if a '+' is encountered, set `result` to 1. Increment `j` if a sign is present.

3. **Convert Digits to Integer:**
   Use a while loop to iterate through consecutive digits in the string. Convert each character to its numeric value and update the `ans` variable. Check for integer overflow in each iteration.

4. **Clamp Result:** Check if the result exceeds the 32-bit signed integer range and return `INT_MAX` or `INT_MIN` accordingly.

5. **Return Result** After the loop, multiply the final result ('ans') by the sign ('result') and return it.

# Complexity
- Time complexity: O(n)


- Space complexity:O(1)
