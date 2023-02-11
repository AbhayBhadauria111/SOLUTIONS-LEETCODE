class Solution {
public:
    int maxval(int i,int j,vector<vector<int>>& grid)
    {
        return max({grid[i][j],grid[i-1][j],grid[i-1][j+1],grid[i][j+1],grid[i+1][j+1],grid[i+1][j],grid[i+1][j-1],grid[i][j-1],grid[i-1][j-1]});    
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>ans;
        vector<int> temp;
        for(int i=1;i<grid.size()-1;i++)
        {
            for(int j=1;j<grid[0].size()-1;j++)temp.push_back(maxval(i,j,grid));
            ans.push_back(temp);
            temp.clear();
        }
        return ans;
    }
};