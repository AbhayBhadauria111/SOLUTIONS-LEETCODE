class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int n=matrix.size(),m=matrix[0].size();
        vector<vector<int>>DP(n+1,vector<int>(m+1,0));
        int ans=0,temp=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='1')
                {
                    temp=min({DP[i][j],DP[i+1][j],DP[i][j+1]});
                    DP[i+1][j+1]=temp+1;
                    ans=max(ans,temp+1);
                }
            }
        }
        return ans*ans;
    }
};