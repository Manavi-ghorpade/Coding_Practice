def remove_consecutive_elements(s, k):
    # Initialize an empty stack
    stack = []

    # Traverse each character in the string
    for char in s:
        if stack and stack[-1][0] == char:
            # If the stack is not empty and the top element is the same as the current character,
            # increment the count
            stack[-1][1] += 1
        else:
            # Otherwise, push the current character onto the stack with a count of 1
            stack.append([char, 1])

        # If the count of the top element reaches k, pop it from the stack
        if stack[-1][1] == k:
            stack.pop()

    # Construct the result string from the stack
    result = ''.join(char * count for char, count in stack)
    return result

# Example usage
s = "abbcccb"
k = 3
print(remove_consecutive_elements(s, k))  # Output: "a"
