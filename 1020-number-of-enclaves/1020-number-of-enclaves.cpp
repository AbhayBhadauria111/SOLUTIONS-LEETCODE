class Solution {
public:
    int n,m;
    int numEnclaves(vector<vector<int>>& grid) {
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==1)filledge(i,0,grid);
            if(grid[i][m-1]==1)filledge(i,m-1,grid);
        }
        for(int j=0;j<m;j++)
        {
            if(grid[0][j]==1)filledge(0,j,grid);
            if(grid[n-1][j]==1)filledge(n-1,j,grid);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]==1)count++;
            }
        }
        return count;
    }
private:
    vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
    bool canplace(int i,int j,vector<vector<int>>& grid)
    {
        if(i<0 or i>=n or j<0 or j>=m)return false ;
        return true;
    }
    void filledge(int i,int j,vector<vector<int>>& grid)
    {
        grid[i][j]=0;
        for(int k=0;k<4;k++)
        {
            int newx=i+dir[k][0];
            int newy=j+dir[k][1];
            if(canplace(newx,newy,grid))
            if(grid[newx][newy]==1)
            filledge(newx,newy,grid);
        }
    }
};