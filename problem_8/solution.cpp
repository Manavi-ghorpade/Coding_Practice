class Solution {
public:
    int myAtoi(string s) 
    {
        int j=0;
        while(s[j]==' ') //Check for leading whitespace
        {
             j++; 
        }
        int result = (s[j] == '-') ? -1 : 1; //check next char for + or - 
        if (s[j] == '-' || s[j] == '+') {
            j++;   //increment j if we get + or - 
        }
        
      int ans=0;
      while(isdigit(s[j])) // while we have continues digits 
      {
          int temp = s[j]-'0'; //convert char to digit 
          if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && temp > INT_MAX % 10)) {
                return (result == 1) ? INT_MAX : INT_MIN;
            } // check the integer range
          ans= (ans*10)+temp; //concatinate every number to ans .. ex- 1*10=10+2=12
          j++;
      }
      ans=ans*result;  //muliply for + or -
      return ans;   
    }
};