class Solution {
public:
    int passThePillow(int n, int time) 
    {
        int count = 0;
        if(time>=n)
        {
            while(time>=n)
            {
                time = time - (n-1);
                count ++;
            } 
        }
        if(count%2 !=0)
        {
            n = n-time;//from backside  
        }
        else
        {
            n = 1;
            n = n+time;
        }
        
        return n;
    }
};