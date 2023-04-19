class Solution {
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        set<vector<int>>pac;
        set<vector<int>>atl;
        set<vector<int>>visited;
        queue<vector<int>>Q1;
        queue<vector<int>>Q2;
        vector<vector<int>>dir={{0,1},{0,-1},{1,0},{-1,0}};
        for(int i=0;i<n;i++)
        {
            pac.insert({i,0});
            atl.insert({i,m-1});
            Q1.push({i,0});
            Q2.push({i,m-1});
        }
        for(int j=0;j<m;j++)
        {
            pac.insert({0,j});
            atl.insert({n-1,j});
            Q1.push({0,j});
            Q2.push({n-1,j});
        }
        while(!Q1.empty())
        {
            vector<int>curr=Q1.front();Q1.pop();
            pac.insert(curr);
            visited.insert(curr);
            for(auto x:dir)
            {
                int newx=curr[0]+x[0];
                int newy=curr[1]+x[1];
                if(newx>=0 && newy>=0 && newx<n && newy<m && heights[newx][newy]>=heights[curr[0]][curr[1]] && (visited.find({newx,newy})==visited.end()))
                {
                    Q1.push({newx,newy});
                }
            }
        }
        visited.clear();
        while(!Q2.empty())
        {
            vector<int>curr=Q2.front();Q2.pop();
            atl.insert(curr);
            visited.insert(curr);
            for(auto x:dir)
            {
                int newx=curr[0]+x[0];
                int newy=curr[1]+x[1];
                if(newx>=0 && newy>=0 && newx<n && newy<m && heights[newx][newy]>=heights[curr[0]][curr[1]] && visited.find({newx,newy})==visited.end())
                {
                    Q2.push({newx,newy});
                }
            }
        }
        vector<vector<int>>ans;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(atl.find({i,j})!=atl.end() and pac.find({i,j})!=pac.end())ans.push_back({i,j});
            }
        }
        return ans;
        
        
        
    }
};