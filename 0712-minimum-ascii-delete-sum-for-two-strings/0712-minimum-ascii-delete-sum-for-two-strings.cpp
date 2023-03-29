class Solution {
public:
    int m,n;
    vector<vector<int>>DP;
    int minimumDeleteSum(string s1, string s2) {
        n=s1.size();
        m=s2.size();
        DP.resize(n+1,vector<int>(m+1,0));
        // int s=solve(s1,s2,n-1,m-1);
        int asciisum=0;
        for(auto x:s1)asciisum+=int(x);
        for(auto x:s2)asciisum+=int(x);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                if(s1[i-1]==s2[j-1])
                {
                    DP[i][j]=int(s1[i-1])+DP[i-1][j-1];
                }
                else
                {
                    DP[i][j]=max(DP[i][j-1],DP[i-1][j]);
                }
            }
        }
        return asciisum-2*DP[n][m];
    }
    // int solve(string s1,string s2,int i,int j)
    // {
    //     if(i<0 or j<0)return 0;
    //     if(DP[i][j]!=-1)return DP[i][j];
    //     DP[i][j]=max(solve(s1,s2,i-1,j),solve(s1,s2,i,j-1));
    //     if(s1[i]==s2[j]){
    //         DP[i][j]=max(DP[i][j],int(s1[i])+solve(s1,s2,i-1,j-1));
    //     }
    //     return DP[i][j];
    // }
};