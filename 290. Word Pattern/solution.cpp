class Solution {
public:
    // Function to split a string into words separated by spaces
    vector<string> split(string p)
    {
        string a="";
        vector<string> vec;
        for(auto i:p)
        {
            if(i==' ')
            {
                vec.push_back(a);
                a = "";
            }
            else
            {
                a+=i;
            }
        }
        vec.push_back(a);
        return vec;
    }
     // Function to check if a given pattern matches a string
    bool wordPattern(string pattern, string s) 
    {
        unordered_map<string,string> mp;
        vector<string> words = split(s);
        // Map to store mapping from pattern characters to words
        unordered_map<char,string> mp1;
        // Map to store mapping from words to pattern characters
        unordered_map<string,char> mp2;
        if(pattern.size()!= words.size())
        {
            return false;
        }
        for(int i=0;i<pattern.length();++i)
        {
            if(mp1.find(pattern[i])==mp1.end())
            {
                mp1[pattern[i]] = words[i];
            }
            else
            {
                if(mp1[pattern[i]] != words[i])
                {
                    return false; // If the mapping doesn't match, return false
                }
            }
            if(mp2.find(words[i])==mp2.end())
            {
                mp2[words[i]]=pattern[i];
            }
            else
            {
                if(mp2[words[i]] != pattern[i])
                {
                    return false; // If the mapping doesn't match, return false
                }
            }
        }
        return true;    
    }
};