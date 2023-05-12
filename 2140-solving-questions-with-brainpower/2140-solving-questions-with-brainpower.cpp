class Solution {
    vector<long long>DP;
public:
    long long mostPoints(vector<vector<int>>& questions) {
        DP.clear();
        DP.resize(questions.size(),-1);
        return solve(0,questions);
    }
private:
    long long solve(int i,vector<vector<int>>& questions)
    {
        if(i>=questions.size())return 0;
        else
        {
            if(DP[i]!=-1)return DP[i];
            long long a=0;
            long long b=0;                
            a=solve(i+1,questions);
            b=questions[i][0]+solve(i+questions[i][1]+1,questions);
            return DP[i]=max(a,b); 
        }
    }
};