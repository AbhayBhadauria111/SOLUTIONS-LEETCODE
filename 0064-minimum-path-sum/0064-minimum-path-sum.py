class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        DP=[[math.inf for i in range(len(grid[0]))]for j in range(len(grid))]
        DP[0][0]=grid[0][0]
        for i in range(len(grid)):
            for j in range(len(grid[0])):
                if i==0 and j==0:
                    continue
                if i==0:
                    grid[i][j]+=grid[i][j-1]
                elif j==0:
                    grid[i][j]+=grid[i-1][j]
                else:
                    grid[i][j]+=min(grid[i-1][j],grid[i][j-1])
        return grid[-1][-1]