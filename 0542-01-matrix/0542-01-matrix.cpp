class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),INT_MAX));
        int m=mat.size(),n=mat[0].size();
        queue<pair<pair<int,int>,int>>Q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(mat[i][j]==0)
               {
                    ans[i][j]=0;Q.push({{i,j},0});
               }
            }
        }
        vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
        while(!Q.empty())
        {
            pair<pair<int,int>,int>temp=Q.front();Q.pop();
            int dist=temp.second;
            for(auto x:dir)
            {
                int i=temp.first.first+x[0],j=temp.first.second+x[1];
                if(i>=0 and i<m and j>-1 and j<n)
                {
                    if(ans[i][j]>dist)
                    {
                        ans[i][j]=dist+1;
                        Q.push({{i,j},dist+1});
                    }
                }
            }
            
        }
        return ans;
    }
};