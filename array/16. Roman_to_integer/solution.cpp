class Solution {
public:
    
    int romanToInt(string s) 
    {
        unordered_map<char, int> mp={{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}   };
        int ans=0;
        for(int i=0;i<s.length();++i)
        {
            int j=i+1;
            if(j<s.length())
            {
                if((s[i]=='I' && s[j]=='V')|| (s[i]=='I' && s[j]=='X') ||(s[i]=='X' && s[j]=='L')||(s[i]=='X' && s[j]=='C')||(s[i]=='C' && s[j]=='D')||(s[i]=='C' && s[j]=='M'))
                {
                   ans = ans+mp[s[j]]-mp[s[i]];
                   ++i;
                }
                else
                {
                    ans=ans+ mp[s[i]];
                }
            }
            else
            {
                  ans= ans+mp[s[i]];
            }
           
        }
       return ans; 
    }
};