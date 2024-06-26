# Problem 
## s="abcccbbd"
## o/p="ad"
### Intuition

The intuition behind this problem is to use a stack data structure to efficiently remove consecutive characters that appear exactly `k` times in a row. By utilizing the stack, we can keep track of each character and its count as we traverse the string. When a character's count reaches `k`, we remove it from the stack. This process continues until we have processed the entire string.

### Approach

1. **Initialize Stack**: Create an empty stack to store pairs of characters and their counts.
2. **Traverse the String**:
   - For each character in the string:
     - If the stack is not empty and the character at the top of the stack is the same as the current character, increment the count of the top element.
     - Otherwise, push the current character onto the stack with an initial count of 1.
     - If the count of the top element reaches `k`, pop it from the stack.
3. **Construct Result**:
   - After processing the entire string, construct the result string by concatenating the characters and their counts from the stack.
   - Since the stack pops elements in reverse order, prepend each character count string to the result.

### Complexity Analysis

- **Time Complexity**: O(n), where `n` is the length of the string `s`. Each character is processed once and each operation on the stack (push, pop) takes O(1) time.
- **Space Complexity**: O(n) in the worst case, where no characters are removed and the stack holds all characters of the string.