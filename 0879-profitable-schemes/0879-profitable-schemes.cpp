class Solution {
private:
    int solve(int ind,int m,int n,vector<int>& group, vector<int>& profit,vector<vector<vector<int>>>&DP)
    {
        if(ind==group.size())
        {
            return m<=0;
        }
        else
        {
            if(DP[ind][n][m]!=-1)return DP[ind][n][m];
            int a=0,b=0;
            if(n-group[ind]>=0)a=solve(ind+1,max(0,m-profit[ind]),n-group[ind],group,profit,DP);
            b=solve(ind+1,m,n,group,profit,DP);
            return DP[ind][n][m]=(a+b)%(1000000007);
        }
    }
public:
    int profitableSchemes(int n, int minProfit, vector<int>& group, vector<int>& profit) {
        vector<vector<vector<int>>>DP(group.size(),vector<vector<int>>(n+1,vector<int>(minProfit+1,-1)));
        return solve(0,minProfit,n,group,profit,DP);
    }
};