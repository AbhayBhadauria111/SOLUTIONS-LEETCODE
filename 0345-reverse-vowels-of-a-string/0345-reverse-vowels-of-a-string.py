class Solution:
    def reverseVowels(self, s: str) -> str:
        s=list(s)
        i=0
        j=len(s)-1
        vow=['a', 'e', 'i', 'o','u','A','E','I','O','U']
        while(i<j):
            while s[i] not in vow and i<j:
                i+=1
            while s[j] not in vow and i<j:
                j-=1
            if s[i] in vow and s[j] in vow:
                s[i],s[j]=s[j],s[i]
            i+=1
            j-=1
        return ''.join(s)
        
            
            