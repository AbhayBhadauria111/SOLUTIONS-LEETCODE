class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        ans=min(nums)
        S=0
        for i in range(len(nums)):
            S+=nums[i]
            ans=max(ans,S)
            if S<0:
                S=0
        return ans
            
            