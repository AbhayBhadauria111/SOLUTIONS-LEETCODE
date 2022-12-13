class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        def solve(i,j):
            if D.get((i,j))!=None:
                return D[(i,j)]
            if i==m-1 and j==n-1:
                return 1
            else:
                a=b=0
                if i<m-1:
                    a=solve(i+1,j)
                if j<n-1:
                    b=solve(i,j+1)
                D[(i,j)]=a+b
                return a+b
        D={}
        return solve(0,0)        