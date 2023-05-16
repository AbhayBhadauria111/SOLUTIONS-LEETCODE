class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n=piles.size();
        vector<vector<int>>DP(n,vector<int>(n,0));
        for(int i=n-1;i>=0;i--)
        {
            for(int j=0;j<n;j++)
            {
                if(i==n-1 and j==0)
                {
                    DP[i][j]=piles[i];
                }
                else if(i==n-1)
                {
                    DP[i][j]=piles[j]-DP[i][j-1];
                }
                else if(j==0)
                {
                    DP[i][j]=piles[i]-DP[i+1][j];
                }
                else
                {
                    DP[i][j]=max(piles[i]-DP[i+1][j],piles[j]-DP[i][j-1]);
                }
            }
        }
        return DP[0][n-1];   
    }
};