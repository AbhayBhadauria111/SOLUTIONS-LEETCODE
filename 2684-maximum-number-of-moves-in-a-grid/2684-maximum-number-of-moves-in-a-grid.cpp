class Solution {
public:
    int maxMoves(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        vector<vector<int>>DP(n,vector<int>(m,0));
        for(int j=m-2;j>=0;j--)
        {
            for(int i=0;i<n;i++)
            {
                if(i>0)
                    DP[i][j]=max(DP[i][j],(grid[i-1][j+1]>grid[i][j])?1+DP[i-1][j+1]:0);
                if(i<n-1)
                    DP[i][j]=max(DP[i][j],(grid[i+1][j+1]>grid[i][j])?1+DP[i+1][j+1]:0);
                DP[i][j]=max(DP[i][j],(grid[i][j+1]>grid[i][j])?1+DP[i][j+1]:0);
                    
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)ans=max(ans,DP[i][0]);
        return ans;
    }
};