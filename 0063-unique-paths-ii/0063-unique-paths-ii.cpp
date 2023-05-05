class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size(),n=obstacleGrid[0].size();
        vector<vector<long long>>DP(m,vector<long long>(n,0));
        bool flag=0;
        for(int i=m-1;i>=0;i--)
        {
            if(obstacleGrid[i][n-1]==1)flag=1;
            if(flag)DP[i][n-1]=-1;
            else
            {
                DP[i][n-1]=1;
            }
        }
        flag=0;
        for(int j=n-1;j>=0;j--)
        {
            if(obstacleGrid[m-1][j]==1)flag=1;
            if(flag)DP[m-1][j]=-1;
            else
            {
                DP[m-1][j]=1;
            }
        }
        for(int i=m-2;i>=0;i--)
            for(int j=n-2;j>=0;j--)
            {
                if(obstacleGrid[i][j]==1){DP[i][j]=-1;continue;}
                if(DP[i+1][j]!=-1)DP[i][j]=DP[i+1][j];
                if(DP[i][j+1]!=-1)DP[i][j]+=DP[i][j+1];
            }
        // for(auto x:DP)
        // {
        //     for(auto y:x)cout<<y<<" ";
        //     cout<<endl;
        // }
        if(DP[0][0]==-1)return 0;
        return int(DP[0][0]);
        
    }
};