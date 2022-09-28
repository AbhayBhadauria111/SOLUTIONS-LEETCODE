class Solution:
    def oddCells(self, m: int, n: int, indices: List[List[int]]) -> int:
        M=[[0 for i in range(n)] for j in range(m)]
        for i in indices:
            r=i[0]
            c=i[1]
            for k in range(n):
                M[r][k]+=1
            for k in range(m):
                M[k][c]+=1
        c=0
        for i in M:
            for j in i:
                if j%2!=0:
                    c+=1
        return c
                
        