class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        vector<pair<int,int>>curr;
        vector<vector<bool>>visited;
        for(int i=0;i<grid.size();i++)
        {
            vector<bool>temp(grid[0].size(),false);
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==2)curr.push_back(make_pair(i,j));
            }
            visited.push_back(temp);
        }
        int n=grid.size();
        int m=grid[0].size();
        queue<vector<pair<int,int>>>Q;
        Q.push(curr);
        int time=-1;
         vector<pair<int,int>>next;
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        while(!Q.empty())
        {
            curr=Q.front();Q.pop();
            next.clear();
            for(auto x:curr)
            {
             if(visited[x.first][x.second]==false)
             {
                 visited[x.first][x.second]=true;
                 for(int i=0;i<4;i++)
                 {
                     int newx=x.first+dir[i][0];
                     int newy=x.second+dir[i][1];
                     if(newx>=0 and newx<n and newy>=0 and newy<m and grid[newx][newy]==1)
                     {next.push_back(make_pair(newx,newy));
                     grid[newx][newy]=2;
                     }
                 }
             }
            }
            time++;
            if(next.size()>0)Q.push(next);
        }
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]==1)return -1;
        return time;
    }
};