#include <iostream>
#include <string>
#include <stack>

std::string removeConsecutiveElements(const std::string& s, int k) {
    // Stack to store characters and their counts
    std::stack<std::pair<char, int>> stack;

    // Traverse each character in the string
    for (int i=0;i<s.size();++i) {
        if (!stack.empty() && stack.top().first == s[i]) {
            // If the stack is not empty and the top element is the same as the current character,
            // increment the count
            stack.top().second++;
        } else {
            // Otherwise, push the current character onto the stack with a count of 1
            stack.push({s[i], 1});
        }

        // If the count of the top element reaches k, pop it from the stack
        if (stack.top().second == k) {
            stack.pop();
        }
    }

    // Construct the result string from the stack
    std::string result;
    while (!stack.empty()) 
    {
        //cout<<stack.top().first*stack.top().second<<".  ";
        result = std::string(stack.top().second, stack.top().first) + result;
        stack.pop();
    }

    return result;
}

// Example usage
int main() {
    std::string s = "aba";
    int k = 3;
    std::string result = removeConsecutiveElements(s, k);
    std::cout << "Output: " << result << std::endl;  // Output: "a"
    return 0;
}