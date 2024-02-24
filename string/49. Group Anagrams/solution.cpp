#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm> // Required for sort function

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) 
    {
        // Create an unordered map to store groups of anagrams
        unordered_map<string,vector<string>> mp;

        // Iterate through each string in the input vector
        for(int i = 0; i < strs.size(); ++i)
        {
            // Create a vector to count the frequency of characters (initially set to 0)
            vector<int> u(27,0);

            // Sort the current string to identify its anagram group
            string s = strs[i];
            sort(s.begin(), s.end());

            // Add the sorted string to the map and push the original string to its corresponding group
            mp[s].push_back(strs[i]);
        }

        // Prepare the result vector
        vector<vector<string>> ans;

        // Iterate through each group in the map
        for(auto i : mp)
        {
            // Push the group (vector of strings) to the result vector
            ans.push_back(i.second);
        }

        // Return the result containing groups of anagrams
        return ans;
    }
};