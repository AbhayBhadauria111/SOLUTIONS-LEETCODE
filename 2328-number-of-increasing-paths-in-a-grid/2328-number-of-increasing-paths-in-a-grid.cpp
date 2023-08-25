class Solution {
    vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
    int solve(int i, int j,vector<vector<int>>& grid,vector<vector<int>>& ans,int last)
    {
        if(i>=0 and j>=0 and i<grid.size() and j<grid[0].size() and grid[i][j]>last)
        {
            if(ans[i][j]!=-1)return ans[i][j];
            int temp=1;
            for(auto x:dir)
            {
                temp=(temp+solve(i+x[0],j+x[1],grid,ans,grid[i][j]))%(1000000007);   
            }
            ans[i][j]=temp%(1000000007);
            return temp%(1000000007);
        }
        else return 0;
    }
public:
    int countPaths(vector<vector<int>>& grid) {
        vector<vector<int>>ans(grid.size(),vector<int>(grid[0].size(),-1));
        int ret=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(ans[i][j]==-1)solve(i,j,grid,ans,-1);
                ret=(ret+ans[i][j])%(1000000007);
            }
        }
        return ret;
    }
};