class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        int left = 0; // Left pointer of the sliding window
        int maxLength = 0; // Variable to store the length of the longest substring
        set<char> charSet; // Set to store unique characters in the current substring

        for(int right = 0; right < s.size(); ++right)
        {
            // Check if the current character is already in the set
            while(charSet.find(s[right]) != charSet.end())
            {
                // If yes, remove the leftmost character and move the left pointer to the right
                charSet.erase(s[left]);
                left++;
            }

            // Add the current character to the set
            charSet.insert(s[right]);

            // Update the maximum length of the substring
            maxLength = max(maxLength, right - left + 1);
        }

        return maxLength;
    }
};
