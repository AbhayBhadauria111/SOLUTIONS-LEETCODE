class Solution:
    def climbStairs(self, n: int) -> int:
        F=[]
        for i in range(1,n+1):
            if i==1:
                F.append(i)
            elif i==2:
                F.append(i)
            else:
                F.append(F[-1]+F[-2])
        return F[-1]
        