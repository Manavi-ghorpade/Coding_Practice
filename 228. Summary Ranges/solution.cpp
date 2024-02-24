class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> ans; // Vector to store summary ranges
        
        // If the input vector is empty, return empty vector
        if(nums.empty())
        {
            return ans;
        }
        
        string first = to_string(nums[0]); // Convert first element to string
        string last = ""; // Initialize last element string
        
        // Iterate through the elements of the input vector
        for(int i = 0; i < nums.size(); ++i)
        {
            // If the next element is consecutive, continue
            if(i + 1 < nums.size() && nums[i + 1] == nums[i] + 1)
            {
                continue;
            }
            // If the next element is not consecutive
            else if(i + 1 < nums.size() && nums[i + 1] != nums[i] + 1)
            {
                last = to_string(nums[i]); // Convert current element to string
                // If the range has more than one element, push the range to ans
                if(first != last)
                {
                    ans.push_back(first + "->" + last);
                }
                // If the range has only one element, push that element to ans
                else
                {
                    ans.push_back(first);
                }
                first = to_string(nums[i + 1]); // Update first element for the next range
            }
            // If it is the last element
            else
            {
                // If the last element is consecutive with the previous one, form a range
                if(i > 0 && nums[i - 1] + 1 == nums[i])
                {
                    last = to_string(nums[i]); // Convert last element to string
                    ans.push_back(first + "->" + last); // Push the range to ans
                }
                // If the last element is not consecutive, push it individually
                else
                {
                    ans.push_back(to_string(nums[i]));
                }
            }

        }    
        return ans; // Return the vector containing summary ranges
    }
};