class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
      if(!nums.empty()) //memory efficient solution
        {
              reverse(nums.begin(),nums.end()); // reverse whole array
              reverse(nums.begin(), nums.begin()+k); //reverse first k elements
              reverse(nums.begin()+k,nums.end());  //reverse remaining elements 
        }
      }
};
