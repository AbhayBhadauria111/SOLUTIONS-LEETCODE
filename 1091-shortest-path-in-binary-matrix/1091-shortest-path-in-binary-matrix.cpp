class Solution {
public:
    vector<vector<bool>>visited;
    int n=0;
    bool canplace(int x,int y,vector<vector<int>>& grid)
    {
        if(x>=0 and x<n and y>=0 and y<n and visited[x][y]==false and grid[x][y]==0)return true;
        return false;
    }
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        n=grid.size();
        if(grid[0][0]==1)return -1;
        for(int i=0;i<grid.size();i++)
        {
            vector<bool>temp(grid.size(),false);
            visited.push_back(temp);
        }
        queue<vector<vector<int>>>Q;
        vector<vector<int>>curr={{0,0}};
        Q.push(curr);
        int ans=1;
        vector<vector<int>>next;
        vector<vector<int>>places={{+1,0},{-1,0},{0,+1},{0,-1},{+1,+1},{+1,-1},{-1,+1},{-1,-1}};
        while(!Q.empty())
        {
            curr=Q.front();Q.pop();
            next.clear();
            for(auto place:curr)
            {
                if(place[0]==n-1 and place[1]==n-1)return ans;
                if(visited[place[0]][place[1]]==false)
                {
                    visited[place[0]][place[1]]=true;
                    for(int i=0;i<8;i++)
                    {
                        int newx=place[0]+places[i][0];
                        int newy=place[1]+places[i][1];
                        if(canplace(newx,newy,grid))next.push_back({newx,newy});
                    }
                }
            }
            ans++;
            if(next.size()>0)Q.push(next);
        }
        return -1;
    }
    
};