class Solution:
    def uniquePaths(self, m: int, n: int) -> int:
        N=m+n-2
        r=n-1
        res=1
        for i in range(1,r+1):
            res=res*(N-r+i)/i
        return int(res)