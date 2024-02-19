class Solution {
public:
    string mergeAlternately(string word1, string word2) 
    {
        int s1= word1.length();
        int s2= word2.length();
        int a = min(s1,s2);
        int i =0;
        string res= "";
        for(int i =0;i<a;++i)
        {
            res = res + word1[i];
            res = res + word2[i];
        }
        if(s2>s1)
        {
            res.append(word2, a, s2);
        }
        else
        {
             res.append(word1, a, s1);
        }
        
        return res;  
    }
};