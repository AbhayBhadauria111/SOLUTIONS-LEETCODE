class Solution:
    def minDistance(self, word1: str, word2: str) -> int:
        dp=[[-1 for i in range(len(word1)+1)]for j in range(len(word2)+1)]
        for i in range(len(word2)+1):
            for j in range(len(word1)+1):
                if i==0 or j==0:
                    dp[i][j]=0
                    continue
                if word1[j-1]==word2[i-1]:
                    dp[i][j]=1+dp[i-1][j-1]
                else:
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1])
        return len(word1)+len(word2)-2*dp[-1][-1]
                    
                    
                    
            
            
        