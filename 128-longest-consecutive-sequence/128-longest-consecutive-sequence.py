class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        S=set(nums)
        ans=0
        for i in nums:
            if i-1 not in S:
                temp=0
                while(i in S):
                    temp+=1
                    i=i+1
                ans=max(ans,temp)
        return ans
                
                
        