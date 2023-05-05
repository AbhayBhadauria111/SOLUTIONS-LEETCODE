class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>DP(m,vector<int>(n,0));
        for(int i=0;i<m;i++)
        {
            DP[i][n-1]=1;
        }
        for(int j=0;j<n;j++)
        {
            DP[m-1][j]=1;
        }
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
               DP[i][j]=DP[i+1][j]+DP[i][j+1]; 
            }
        }
        return DP[0][0];
    }
};