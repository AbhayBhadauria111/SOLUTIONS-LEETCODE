class Solution {
private:
    int solve(int n,vector<int>&Sq,vector<int>&DP)
    {
        if(n==0)return 0;
        else
        {
            if(DP[n]!=-1)return DP[n];
            int ans=INT_MAX;
            for(auto x:Sq)
            {
                if(x<=n)
                    ans=min(ans,solve(n-x,Sq,DP));
            }
            return DP[n]=ans+1;
        }
    }
public:
    int numSquares(int n) {
        vector<int>Sq;
        vector<int>DP(n+1,-1);
        int i=1;
        while(i*i<=n)
        {
            Sq.push_back(i*i);
            i++;
        }
        return solve(n,Sq,DP);
    }
};