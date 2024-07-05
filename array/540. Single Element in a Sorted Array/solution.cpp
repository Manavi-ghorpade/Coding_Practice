class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) 
    {
        int left = 0;
        int right = nums.size()-1;
        int mid=0;
        while(left<right)
        {
            mid = (left+right)/2;
            cout<<mid<<endl;
            if((mid%2==0 && nums[mid] == nums[mid+1]) || (mid%2!=0 && nums[mid]==nums[mid-1])) //even
            {
                left = mid+1;
            }
            else
            {
                right = mid;
            }
        }
        return nums[left];
    }
};