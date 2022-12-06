class Solution:
    def trailingZeroes(self, n: int) -> int:
        b=0
        while(n!=0):
            n=n//5
            b+=n
        return b
            