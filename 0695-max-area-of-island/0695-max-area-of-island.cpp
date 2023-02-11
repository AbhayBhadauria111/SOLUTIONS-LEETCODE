class Solution {
public:
    int area(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 or j<0 or i==grid.size() or j==grid[0].size() or grid[i][j]==0)return 0;
        grid[i][j]=0;
        return 1+area(i+1,j,grid)+area(i-1,j,grid)+area(i,j+1,grid)+area(i,j-1,grid);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
       int ans=0,n=grid.size(),m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)
                ans=max(ans,area(i,j,grid));
            }
        }
        return ans;
    }
};