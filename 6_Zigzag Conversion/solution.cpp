class Solution {
public:
    string convert(string s, int numRows) 
    {
        if(numRows==1)
        {
            return s;
        }
        string result = "";
        int increment = (numRows-1)*2; //how much difference between each letter of row
        for(int i=0;i<numRows;++i) //loop through rows
        {
            for(int j=i;j<s.size();j=j+increment) //start with first letter of each row
            {
                result=result+s[j];  //add char to result 
                if(i!=0 && i!=numRows-1 && j+increment-2*i <s.size())
                {
                    result=result+s[j+increment-2*i]; //add the extra char from middle rows
                }
            }
        }  
        return result; 
    }
};