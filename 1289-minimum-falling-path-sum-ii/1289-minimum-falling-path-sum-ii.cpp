class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& grid) {
        vector<vector<int>>DP(grid.size(),vector<int>(grid[0].size(),0));
        int n=grid.size();
        int m=grid[0].size();
        for(int j=0;j<m;j++)
            DP[0][j]=grid[0][j];
        for(int i=1;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                int temp=INT_MAX;
                for(int k=0;k<m;k++)
                {
                    // cout<<DP[i-1][k]<<" ";
                    if(k==j)continue;
                    temp=min(temp,DP[i-1][k]);
                }
                DP[i][j]=temp+grid[i][j];
                // cout<<endl;
            }   
        }
        return *min_element(DP[n-1].begin(),DP[n-1].end());
    }
};