class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>> answer(rowIndex+1);
        vector<int> a;
        a.push_back(1);
        answer[0]=a;
        if(rowIndex==0)
        {
            return answer[0];
        }
        a.push_back(1);
        answer[1]=a;
        if(rowIndex==1)
        {
            return answer[1];
        }
        for(int i=2;i<answer.size();++i)
        {
            vector<int> b(i+1);
            b[0]=1;
            b[b.size()-1]=1;
            for(int k=1;k<b.size()-1;++k)
            {
                    int sum=0;
                    int left =k-1;
                    int right= left+1;
                    b[k] = answer[i-1][left] + answer[i-1][right];   
                
            }
            
            answer[i]=b;
        }
        return answer[rowIndex];      
    }
};