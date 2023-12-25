#LEETCODE PROBLEM 8

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
