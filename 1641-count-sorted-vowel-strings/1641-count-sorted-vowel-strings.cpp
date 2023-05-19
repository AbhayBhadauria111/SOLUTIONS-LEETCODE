class Solution {
public:
    int countVowelStrings(int n) {
        vector<vector<int>>DP(n+1,vector<int>(5,0));
        int i=0;
        for(int j=0;j<5;j++)DP[n][j]=1;
        for(int i=n-1;i>=0;i--)
        {
            for(int j=4;j>=0;j--)
            {
                int temp=0;
                for(int k=j;k<5;k++)temp+=DP[i+1][k];
                DP[i][j]=temp;
            }
        }
        return DP[0][0];
    }
};