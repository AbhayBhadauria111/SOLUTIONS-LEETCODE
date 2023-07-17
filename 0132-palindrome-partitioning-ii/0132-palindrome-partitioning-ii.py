class Solution:
    def minCut(self, s: str) -> int:
        def ispal(s):
            return s[::]==s[::-1]
        def solve(s,i,j,dp):
            if i>=j:
                return 0
            if dp[i][j]!=-1:
                return dp[i][j]
            if ispal(s[i:j+1]):
                return 0
            minstep=math.inf
            for k in range(i,j):
                if ispal(s[i:k+1]):
                    temp=1+solve(s,k+1,j,dp)
                    minstep=min(minstep,temp)
            dp[i][j]=minstep
            return dp[i][j]
        DP=[[-1 for j in range(len(s))]for i in range(len(s))]
        return solve(s,0,len(s)-1,DP)
        