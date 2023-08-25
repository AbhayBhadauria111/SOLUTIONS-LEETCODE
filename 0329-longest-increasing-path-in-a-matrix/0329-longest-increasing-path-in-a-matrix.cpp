class Solution {
    vector<vector<int>>dir{{0,1},{0,-1},{1,0},{-1,0}};
    int solve(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>& DP,int last)
    {
        if(i>-1 and j>-1 and i<DP.size() and j<DP[0].size() and matrix[i][j]>last)
        {
            if(DP[i][j]!=0)return DP[i][j];
            int temp=0;
            for(auto x:dir)
            {
                temp=max(solve(i+x[0],j+x[1],matrix,DP,matrix[i][j]),temp);
            }
            return DP[i][j]=(temp+1);
        }
        return 0;
    }
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>DP(matrix.size(),vector<int>(matrix[0].size(),0));
        int ans=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(DP[i][j]==0)solve(i,j,matrix,DP,-1);
                ans=max(DP[i][j],ans);
            }
        }
        return ans;
    }
};