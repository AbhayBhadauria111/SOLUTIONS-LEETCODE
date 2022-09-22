class Solution:
    def coinChange(self, coins: List[int], amount: int) -> int:
        DP=[[-1 for i in range(amount+1)] for j in range(len(coins)+1)]
        for i in range(len(coins)+1):
            for j in range(amount+1):
                if j==0:
                    DP[i][j]=0
                    continue
                if i==0:
                    DP[i][j]=inf
                    continue
                if coins[i-1]<=j:
                    DP[i][j]=min(1+DP[i][j-coins[i-1]],DP[i-1][j])
                else:
                    DP[i][j]=DP[i-1][j]
        return DP[-1][-1] if DP[-1][-1]!=inf else -1