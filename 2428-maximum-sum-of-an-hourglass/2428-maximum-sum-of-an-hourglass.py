class Solution:
    def maxSum(self, grid: List[List[int]]) -> int:
        ans=0
        def glass(grid,i,j):
            ans=0
            ans+=grid[i][j]+grid[i][j+1]+grid[i][j+2]
            ans+=grid[i+1][j+1]
            ans+=grid[i+2][j]+grid[i+2][j+1]+grid[i+2][j+2]
            return ans
        
        n=len(grid)
        for i in range(n-2):
            for j in range(len(grid[0])-2):
                ans=max(ans,glass(grid,i,j))
        return ans
        