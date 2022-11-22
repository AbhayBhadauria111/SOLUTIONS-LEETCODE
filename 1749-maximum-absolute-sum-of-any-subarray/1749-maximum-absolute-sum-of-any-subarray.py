class Solution:
    def maxAbsoluteSum(self, nums: List[int]) -> int:
        ans=0
        for i in range(1,len(nums)):
            nums[i]+=nums[i-1]
        maxx=minn=nums[0]
        ans=0
        for i in nums:
            maxx=max(maxx,i)
            minn=min(minn,i)
            if maxx>=0 and minn>=0:
                ans=max(abs(maxx),ans)
            elif maxx<0 and minn<0:
                ans=max(abs(minn),ans)
            else:
                ans=max(ans,abs(minn)+abs(maxx))
        return ans
                       
        
        