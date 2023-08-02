class Solution {
public:
    int minDistance(string word1, string word2) {
        vector<vector<int>>DP(word1.size()+1,vector<int>(word2.size()+1,0));
        for(int i=0;i<=word1.size();i++)
        {
            for(int j=0;j<=word2.size();j++)
            {
                if(i==0 or j==0)
                {
                    if(i==0)DP[i][j]=j;
                    if(j==0)DP[i][j]=i;
                }
                else
                {
                    if(word1[i-1]==word2[j-1])DP[i][j]=DP[i-1][j-1];
                    else
                    {
                        DP[i][j]=min(DP[i-1][j-1],min(DP[i][j-1],DP[i-1][j]))+1;
                    }
                }
            }
        }
        return DP[word1.size()][word2.size()];
    }
};