class Solution {
public:
    int n,m;
    int findMaxFish(vector<vector<int>>& grid) {
        int ans=0;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
                if(grid[i][j]>0){
                    int temp=fishinlake(i,j,grid);
                    ans=max(ans,temp);
                }
        }
        return ans;
    }
private:
    int fishinlake(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=n or j>=m or i<0 or j<0 or grid[i][j]==0)return 0;
        else
        {
            int curr=grid[i][j];
            grid[i][j]=0;
            return curr+ fishinlake(i,j+1,grid)+fishinlake(i,j-1,grid)+fishinlake(i+1,j,grid)+fishinlake(i-1,j,grid);
        }
    }
};