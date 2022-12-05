class Solution:
    def maxScore(self, s: str) -> int:
        l=0 if s[0]=='1' else 1
        r=s[1:].count('1')
        ans=l+r
        for i in range(1,len(s)-1):
            if s[i]=='0':
                l+=1
            else:
                r-=1
            ans=max(ans,l+r)
        return ans
            
        
        
        