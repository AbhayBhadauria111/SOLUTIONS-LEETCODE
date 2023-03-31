//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
  set<vector<vector<int>>>DistIslands;
  vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
    int countDistinctIslands(vector<vector<int>>& grid) {
        // code here
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1){solve(i,j,grid);}
            }
        }
        
        int ans=DistIslands.size();
        return ans;
    }
private:
    bool canplace(int i,int j,vector<vector<int>>& grid)
    {
        if(i>=0 and j>=0 and i<grid.size() and j<grid[0].size() and grid[i][j]==1)return true;
        return false;
    }
    void solve(int i,int j,vector<vector<int>>& grid)
    {
        queue<vector<int>>Q;
        vector<vector<int>>temp;
        temp.push_back({0,0});
        Q.push({i,j});
        grid[i][j]=0;
        while(!Q.empty())
        {
            vector<int>curr=Q.front();Q.pop();
            for(int k=0;k<4;k++)
            {
                int newx=curr[0]+dir[k][0];
                int newy=curr[1]+dir[k][1];
                if(canplace(newx,newy,grid))
                {
                    Q.push({newx,newy});
                    temp.push_back({newx-i,newy-j});
                    grid[newx][newy]=0;
                }
            }
        }
        DistIslands.insert(temp);
    }
};


//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends