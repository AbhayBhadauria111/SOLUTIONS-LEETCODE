class Solution:
    def minFallingPathSum(self, matrix: List[List[int]]) -> int:
        def fallingsum(i,j):
            if D.get((i,j))!=None:
                return D[(i,j)]+matrix[i][j]
            if i==len(matrix)-1:
                return matrix[i][j]
            else:
                a=b=math.inf
                if j>0:
                    a=fallingsum(i+1,j-1)
                if j<len(matrix[i])-1:
                    b=fallingsum(i+1,j+1)
                c=fallingsum(i+1,j)
                D[(i,j)]=min(a,b,c)
                return D[(i,j)]+matrix[i][j]  
        ans=math.inf
        D={}
        for i in range(len(matrix[0])):
            ans=min(ans,fallingsum(0,i))
        return ans