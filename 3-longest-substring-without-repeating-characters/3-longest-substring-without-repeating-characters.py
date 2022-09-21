class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        ws=we=0
        ans=0
        D={}
        while(we<len(s)):
            if D.get(s[we],-1)==-1:
                D[s[we]]=we
                
                ans=max(ans,we-ws+1)
            else:
                temp=D[s[we]]+1
                while(ws<temp):
                    del D[s[ws]]
                    ws+=1     
                D[s[we]]=we
                
            we+=1
        return ans
            
                
                
                
        