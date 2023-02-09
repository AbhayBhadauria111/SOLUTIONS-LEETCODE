class Solution {
public:
    void makevisited(vector<vector<char>>& grid,int i,int j)
    {
        if(grid[i][j]=='0')return;
        grid[i][j]='0';
        if(i<grid.size()-1)
        makevisited(grid,i+1,j);
        if(i>0)
        makevisited(grid,i-1,j);
        if(j<grid[0].size()-1)
        makevisited(grid,i,j+1);
        if(j>0)
        makevisited(grid,i,j-1);
    }
    int numIslands(vector<vector<char>>& grid) {
        int count=0;
        int n=grid.size();
        int m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j]=='1')
                {
                    makevisited(grid,i,j);
                    count++;
                }
            }
        }
        return count;
    }
};