class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        def solve(matrix,i,j):
            k=j
            while(k>=0):
                matrix[i][k]=0
                k-=1
            k=j
            while(k<len(matrix[i])):
                matrix[i][k]=0
                k+=1
            k=i
            while(k<len(matrix)):
                matrix[k][j]=0
                k+=1
            k=i
            while(k>=0):
                matrix[k][j]=0
                k-=1
        A=[]
        for i in range(len(matrix)):
            for j in range(len(matrix[i])):
                if matrix[i][j]==0:
                    A.append([i,j])
        for i in A:
            solve(matrix,i[0],i[1])
                    
        