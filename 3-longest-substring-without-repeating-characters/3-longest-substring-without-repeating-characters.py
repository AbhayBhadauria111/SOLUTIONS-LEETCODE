class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        sub=''
        ans=0
        for i in s:
            if i not in sub:
                sub+=i
            else:
                sub=sub[sub.index(i)+1:]+i
            ans=max(ans,len(sub))
        return ans
                
        