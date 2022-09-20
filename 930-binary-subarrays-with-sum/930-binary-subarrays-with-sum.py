class Solution:
    def numSubarraysWithSum(self, nums: List[int], goal: int) -> int:
        CS=0
        D={}
        ans=0
        for i in nums:
            CS+=i
            if CS==goal:
                ans+=1
            if CS-goal in D:
                ans+=D[CS-goal]
            D[CS]=D.get(CS,0)+1
        return ans

            
            
            