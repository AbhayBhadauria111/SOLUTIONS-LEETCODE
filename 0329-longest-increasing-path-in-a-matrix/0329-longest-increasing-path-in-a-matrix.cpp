class Solution {
    vector<vector<bool>>visited;
    vector<vector<int>>DP;
    int n,m;
    vector<vector<int>>dir={{1,0},{-1,0},{0,1},{0,-1}};
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        n=matrix.size();
        m=matrix[0].size();
        visited.resize(n,vector<bool>(m,false));
        DP.resize(n,vector<int>(m,-1));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                ans=max(ans,solve(i,j,matrix));
            }
        }
        return ans;
    }
private:
    bool canput(int i,int j,vector<vector<int>>&M,int curr)
    {
        if(i<0 or i>=n or j<0 or j>=m or M[i][j]<=curr or visited[i][j]==true)return false;
        return true;
    }
    int solve(int i,int j,vector<vector<int>>&M)
    {
        if(DP[i][j]!=-1)return DP[i][j];
        else
        {
            
            int temp=0;
            for(auto x:dir)
            {
                int newx=i+x[0];
                int newy=j+x[1];
                if(canput(newx,newy,M,M[i][j]))
                {
                    visited[i][j]=true;
                    temp=max(temp,solve(newx,newy,M));
                    visited[i][j]=false;
                }
            }
            DP[i][j]=1+temp;
            return DP[i][j];
        }
        
    }
};