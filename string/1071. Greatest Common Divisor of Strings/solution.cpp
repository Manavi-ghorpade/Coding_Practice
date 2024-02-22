class Solution {
public:
    string gcdOfStrings(string str1, string str2)
    {
        int l1 = str1.length();  // Get the length of the first string
        int l2 = str2.length();  // Get the length of the second string

        int len = min(l1,l2);  // Determine the minimum length among the two strings
        for(int i = len;i>0;--i)  // Iterate from the minimum length to 1
        {
            if(l1%i ==0 && l2%i ==0)  // Check if both lengths are divisible by the current length
            {
                int r1 = l1/i;  // Calculate the repetition factor for the first string
                int r2 = l2/i;  // Calculate the repetition factor for the second string
                string result1="";  // Initialize an empty string to store the concatenated result for the first string
                string result2="";  // Initialize an empty string to store the concatenated result for the second string
            
                for (int j = 0; j < r1; ++j) {  // Concatenate the substring of the first string 'r1' times
                    result1 += str1.substr(0, i);
                }
                for (int j = 0; j < r2; ++j) {  // Concatenate the substring of the second string 'r2' times
                    result2 += str1.substr(0, i);  // <-- Note that substr(0, i) should be str2, not str1
                }
                if( result1== str1 &&  result2== str2)  // Check if the concatenated strings match the original strings
                {
                    return str1.substr(0,i);  // Return the substring if it satisfies the condition of being the greatest common divisor
                }
            }
        }
        return "";  // Return an empty string if no common divisor is found
    }
}; 
