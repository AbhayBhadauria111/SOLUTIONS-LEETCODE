class Solution:
    def hammingWeight(self, n: int) -> int:
        n=bin(n)[2:]
        ans=0
        for i in n:
            if i=='1':
                ans+=1
        return ans
        