class Solution:
    def rob(self, nums: List[int]) -> int:
        def solve(nums):
            
            dp=[-1 for i in range(len(nums))]
            dp[0]=nums[0]
            for i in range(1,len(nums)):
                if i<2:
                    dp[i]=max(dp[i-1],nums[i])
                else:
                    dp[i]=max(dp[i-1],nums[i]+dp[i-2])
            return dp[-1]
           
        return solve(nums)
            
        
        