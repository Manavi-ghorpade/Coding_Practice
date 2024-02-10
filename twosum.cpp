class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> mp;
        vector<int> ans;
        
        for(int i=0;i<nums.size();++i)
        {
            mp.insert({nums[i], i});
        }
        for(int i=0;i<nums.size();++i)
        {
            unordered_map<int,int>::const_iterator got= mp.find(target - nums[i]);
            if(got==mp.end())
            {
                    
            }
            else
            {
                if(!(got->second==i))
                {
                    cout<<"i"<<i<<" ";
                    ans.push_back(i);
                    cout<<"j"<<got->first<<" ";
                    ans.push_back(got->second);
                    break;
                }
                
            }
        } 
        return ans;
    }
};
