class Solution {
    vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
    int n;
public:
    int shortestBridge(vector<vector<int>>& grid) {
        queue<vector<int>>Q;
        n=grid.size();
        bool flag=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    BFS(Q,i,j,grid);
                    flag=1;
                    break;
                }
            }
            if(flag)break;
        }
        vector<vector<bool>>vis(n,vector<bool>(n,0));
        while(!Q.empty())
        {
            vector<int>curr=Q.front();Q.pop();
            vis[curr[0]][curr[1]]=1;
            for(auto x:dir)
            {
                int newx=curr[0]+x[0];
                int newy=curr[1]+x[1];
                if(newx<n and newy<n and newx>=0 and newy>=0 and !vis[newx][newy])
                {
                    if(grid[newx][newy]==1)return curr[2];
                    vis[newx][newy]=1;
                    Q.push({newx,newy,curr[2]+1});
                }
            }
        }
        return 0;
    }
private:
    void BFS(queue<vector<int>>&Q,int i,int j,vector<vector<int>>&grid)
    {
        grid[i][j]=0;
        Q.push({i,j,0});
        for(auto x:dir)
        {
            int newx=x[0]+i;
            int newy=x[1]+j;
            if(newx<n and newy<n and newx>=0 and newy>=0 and grid[newx][newy]==1)BFS(Q,newx,newy,grid);
        }
    }
};