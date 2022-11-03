class Solution:
    def isMatch(self, s: str, p: str) -> bool:
        dp=[[-1 for i in range(len(p)+1)]for j in range(len(s)+1)]
        for i in range(len(s)+1):
            for j in range(len(p)+1):
                if i==0 and j==0:
                    dp[i][j]=True
                elif i==0 and p[j-1]=='*':
                    dp[i][j]=dp[i][j-1]
                elif i==0 or j==0:
                    dp[i][j]=False
                elif s[i-1]==p[j-1] or p[j-1]=='?':
                    dp[i][j]=dp[i-1][j-1]
                elif p[j-1]=='*':
                    dp[i][j]=dp[i][j-1] or dp[i-1][j]
                else:
                    dp[i][j]=False
        return dp[-1][-1]
                    
                        
        