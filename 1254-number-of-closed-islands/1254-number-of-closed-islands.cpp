class Solution {
public:
    int n,m;
    int closedIsland(vector<vector<int>>& grid) {
        int count=0;
        n=grid.size();
        m=grid[0].size();
        for(int i=1;i<n-1;i++)
        {
            for(int j=1;j<m-1;j++)
            {
                if(grid[i][j]==0 and solve(i,j,grid))
                {count++;}
            }
        }
        return count;
    }
private:
    bool solve(int i,int j,vector<vector<int>>& grid)
    {
        if(i<=0 or j<=0 or i>=n-1 or j>=m-1 )return false;
        else
        {
            grid[i][j]=1;
            bool ret=true;
            if(grid[i+1][j]==0)ret=ret & solve(i+1,j,grid);
            if(grid[i-1][j]==0)ret=ret & solve(i-1,j,grid);
            if(grid[i][j+1]==0)ret=ret & solve(i,j+1,grid);
            if(grid[i][j-1]==0)ret=ret & solve(i,j-1,grid);
            return ret;
        }
    }
};