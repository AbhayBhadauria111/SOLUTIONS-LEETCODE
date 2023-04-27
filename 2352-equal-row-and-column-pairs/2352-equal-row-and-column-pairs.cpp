class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int n=grid.size();
        map<vector<int>,int>rows;
        map<vector<int>,int>cols;
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
               temp.push_back(grid[i][j]); 
            }
            rows[temp]++;
        }
        for(int i=0;i<n;i++)
        {
            vector<int>temp;
            for(int j=0;j<n;j++)
            {
               temp.push_back(grid[j][i]); 
            }
            cols[temp]++;
        }
        int ans=0;
        for(auto x:rows)
        {
            ans+=x.second*cols[x.first];
        }
        return ans;
        
    }
};