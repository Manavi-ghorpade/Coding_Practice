class Solution {
public:
    void rotate(vector<int>& nums, int k) 
    {
        vector<int> temp(nums.size()); //created another array of size of given array 
        for(int i=0;i<nums.size();++i) 
        {
            int t= (i+k)%nums.size();  //calculated place to add elements 0+3 % 5 = 3 , so 0th element will be placed at 3rd place in new array
            temp[t]=nums[i]; 
        }
        for(int i=0;i<nums.size();++i) //assign elements to original array again !
        {
            nums[i]=temp[i];
        }
      
    } 
};  // time complexity - O(n) space complexity - O(n)
