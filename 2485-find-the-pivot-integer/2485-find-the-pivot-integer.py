class Solution:
    def pivotInteger(self, n: int) -> int:
        if n==1:
            return 1
        s=0
        S=n*(n+1)//2
        for i in range(1,n+1):
            s+=i
            if S==s:
                return i
            S-=i
        return -1
            
        