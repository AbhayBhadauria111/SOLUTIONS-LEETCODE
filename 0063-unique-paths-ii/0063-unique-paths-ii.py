class Solution:
    def uniquePathsWithObstacles(self, obstacleGrid: List[List[int]]) -> int:
        m=len(obstacleGrid)
        n=len(obstacleGrid[0])
        if obstacleGrid[0][0]==1:
            return 0
        obstacleGrid[0][0]=1
        for i in range(len(obstacleGrid)):
            for j in range(len(obstacleGrid[0])):
                if i==0 and j==0:
                    continue
                if obstacleGrid[i][j]==1:
                    obstacleGrid[i][j]=0
                    continue
                if i==0:
                    obstacleGrid[i][j]=obstacleGrid[i][j-1]
                    continue
                elif j==0:
                    obstacleGrid[i][j]=obstacleGrid[i-1][j]
                    continue
                else:
                    obstacleGrid[i][j]=obstacleGrid[i-1][j]+obstacleGrid[i][j-1]
        return obstacleGrid[-1][-1]
                    
                    
                    
        
        