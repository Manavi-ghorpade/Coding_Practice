class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) 
    {
        int Total_gas=0;
        int Total_cost=0;
        
        for(int i=0;i<gas.size();++i)
        {
            Total_gas= Total_gas+gas[i];
            Total_cost=Total_cost+cost[i];
            
        }
        if(Total_gas < Total_cost)
        {
            return -1;
        }
        int total = 0;
        int ans = 0;
        for(int i=0;i<gas.size();++i)
        {
            total +=  gas[i] - cost[i];
            if(total < 0)
            {
                total = 0;
                ans = i+1;
            }
        }
        return ans;

    }
};