class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int,int> mp;
        for(int i :nums1)
        {
            if(mp.find(i)==mp.end())
            {
                mp[i]=1;
            }
            else
            {
                mp[i]++;
            }
        }
        nums1.clear();
        for(int i : nums2)
        {
            if(mp.find(i)!=mp.end() && mp[i]>0)
            {
                mp[i]--;
                nums1.push_back(i);
            }

        }
        return nums1;
    }
};