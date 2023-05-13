class Solution {
    vector<int>DP;
public:
    int countGoodStrings(int low, int high, int zero, int one) {
        DP.resize(high+1,-1);
        int ans=0;
        ans=solve(0,low,high,zero,one);
        return ans;
    }
private:
    int solve(int currl,int low, int high,int zero,int one)
    {
        if(currl>high)return 0;
        if(currl==high)return 1;
        else
        {
            if(DP[currl]!=-1)return DP[currl];
            int temp=0;
            if(currl>=low)temp=1;
            return DP[currl]=(temp+solve(currl+zero,low,high,zero,one)+solve(currl+one,low,high,zero,one))%(1000000007); 
        }
    }
};