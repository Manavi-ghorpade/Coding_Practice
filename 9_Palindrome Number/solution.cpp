class Solution {
public:
    // Function to check if a given integer is a palindrome
    bool isPalindrome(int x) {
        // Handle negative numbers, as they cannot be palindromes
        if(x < 0) {
            return false;
        }

        long int result = 0; // Variable to store the reversed integer
        int original = x; // Save the original value of x for comparison

        // Reverse the digits of x
        while(x) {
            int last_num = x % 10; // Extract the last digit of x
            result = result * 10 + last_num; // Build the reversed number
            x = x / 10; // Move to the next digit
        }

        // Check if the reversed number is equal to the original number
        if(result == original) {
            return true; // x is a palindrome
        }

        return false; // x is not a palindrome
    }
};
