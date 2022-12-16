class Solution:
    def maximumValue(self, strs: List[str]) -> int:
        ans=0
        for i in strs:
            try:
                ans=max(ans,int(i))
            except:
                ans=max(ans,len(i))
        return ans
        