# 6 ZigZag Conversion
The string "PAYPALISHIRING" is written in a zigzag pattern on a given number of rows like this: (you may want to display this pattern in a fixed font for better legibility)

P        A      H      N
A  P  L  S   I    I   G
Y        I        R
And then read line by line: "PAHNAPLSIIGYIR"

# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
The problem is asking to convert the given string into a zigzag pattern with a specified number of rows. To achieve this, the characters of the input string need to be arranged in a specific order based on the number of rows.

# Approach
<!-- Describe your approach to solving the problem. -->
1. Handle the special case when the number of rows is 1, as the result will be the same as the input string.
2. Initialize an empty string `result` to store the converted string.
3. Calculate the variable `increment`, representing the difference between each letter in a row.
4. Iterate through each row (i) from 0 to numRows-1 and then iterate through the string (j) with a step of `increment`.
5. For each character at index `j`, append it to the result string.
6. If the current row is not the first or the last row and the additional character from the middle of the row is within the string boundaries, append that character to the result as well.
7. Continue this process for all rows and characters.
8. The final `result` string will be the converted zigzag pattern.

# Complexity
- Time complexity:
<!-- Add your time complexity here, e.g. $$O(n)$$ -->
The time complexity is O(n), where n is the length of the input string. The two nested loops iterate through each character once.

- Space complexity:
<!-- Add your space complexity here, e.g. $$O(n)$$ -->
The space complexity is O(1) since we are using a constant amount of extra space, and the space required does not grow with the input size. The result string is the only additional space used.