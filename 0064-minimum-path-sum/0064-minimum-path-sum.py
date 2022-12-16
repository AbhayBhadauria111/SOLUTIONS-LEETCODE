class Solution:
    def minPathSum(self, grid: List[List[int]]) -> int:
        m=len(grid)
        n=len(grid[0])
        def solve(i,j):
            if D.get((i,j))!=None:
                return D[(i,j)]
            if i==m-1 and j==n-1:
                return grid[i][j]
            else:
                a=b=math.inf
                if i<m-1:
                    a=solve(i+1,j)
                if j<n-1:
                    b=solve(i,j+1)
                D[(i,j)]=min(a,b)+grid[i][j]
                return D[(i,j)]
        D={}
        return solve(0,0)