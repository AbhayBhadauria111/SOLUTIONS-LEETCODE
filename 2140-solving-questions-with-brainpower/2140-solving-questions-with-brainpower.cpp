class Solution {
    
public:
    long long mostPoints(vector<vector<int>>& questions) {
        vector<long long>DP(questions.size()+1,0);
        long long a,b;
        for(int i=questions.size()-1;i>=0;i--)
        {
            a=DP[i+1];
            if(i+questions[i][1]<questions.size())
            {
                b=questions[i][0]+DP[questions[i][1]+1+i];
            }
            else
                b=questions[i][0];
            DP[i]=max(a,b);
        }
        return DP[0];
    }
};