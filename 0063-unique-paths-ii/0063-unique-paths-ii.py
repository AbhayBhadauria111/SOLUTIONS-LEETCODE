class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        m=len(obstacleGrid)
        n=len(obstacleGrid[0])
        def solve(i,j):
            if D.get((i,j))!=None:
                return D[(i,j)]
            if i==m-1 and j==n-1:
                return 1
            elif obstacleGrid[i][j]==1:
                return 0
            else:
                a=b=0
                if j<n-1:
                    a=solve(i,j+1)
                if i<m-1:
                    b=solve(i+1,j)
                D[(i,j)]=a+b
                return a+b
        D={}
        if obstacleGrid[m-1][n-1]==1:
            return 0
        return solve(0,0)
        
        