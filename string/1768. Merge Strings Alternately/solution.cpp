#include <string>

class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        // Get the lengths of both input strings
        int s1 = word1.length();
        int s2 = word2.length();
        
        // Determine the minimum length among both strings
        int a = min(s1, s2);
        int i = 0; // Unused variable
        
        string res = ""; // Initialize the result string
        
        // Iterate through the common length of both strings
        for(int i = 0; i < a; ++i)
        {
            // Append characters from both strings alternately
            res = res + word1[i];
            res = res + word2[i];
        }
        
        // If word1 is longer, append the remaining characters from word1
        if(s1 > s2)
        {
            while(a < word1.length())
            {
                res = res + word1[a];
                a++;
            }
        }
        // If word2 is longer, append the remaining characters from word2
        else
        {
            while(a < word2.length())
            {
                res = res + word2[a];
                a++;
            }
        }
        
        return res; // Return the merged string  
    }
};  
