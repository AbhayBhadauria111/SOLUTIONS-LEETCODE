class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        vow=['a','e','i','o','u','A','E','I','O','U']
        c1=c2=0
        for i in range(len(s)):
            if s[i] in vow:
                if i<len(s)//2:
                    c1+=1
                else:
                    c2+=1
        return c1==c2
