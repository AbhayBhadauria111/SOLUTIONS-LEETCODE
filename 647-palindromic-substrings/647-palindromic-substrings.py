class Solution:
    def countSubstrings(self, s: str) -> int:
        count=0
        for i in range(len(s)):
            
            j=i
            k=i
            while(j>=0 and k<len(s) and s[j]==s[k]):
                count+=1
                j-=1
                k+=1
            j=i
            k=i+1
            while(j>=0 and k<len(s) and s[j]==s[k]):
                j-=1
                k+=1
                count+=1
        return count
                