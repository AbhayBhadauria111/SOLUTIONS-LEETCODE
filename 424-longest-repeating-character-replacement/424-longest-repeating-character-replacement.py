class Solution:
    #         ws=window start
#         we=window end
    def characterReplacement(self, s: str, k: int) -> int:

        ws=we=0
        D={}
        maxfreq=0
        ans=0
        while(we<len(s)):
            D[s[we]]=D.get(s[we],0)+1
            maxfreq=max(maxfreq,D.get(s[we],0))
            if we-ws+1-maxfreq<=k:
                ans=max(ans,we-ws+1)
                we+=1                
            else:
                D[s[ws]]-=1
                ws+=1
                maxfreq=max(D.values())
                D[s[we]]-=1
        return ans
                
            
    
                
            
            
    
        