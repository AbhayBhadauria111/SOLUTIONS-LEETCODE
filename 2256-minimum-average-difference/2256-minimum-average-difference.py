class Solution:
    def minimumAverageDifference(self, nums: List[int]) -> int:
        if len(nums)<2:
            return 0
        s=0
        totsum=sum(nums)
        s+=nums[0]
        totsum-=nums[0]
        nums[0]=abs(s//1-totsum//(len(nums)-1))
        ans=0
        minavg=nums[0]
        for i in range(1,len(nums)-1):
            s+=nums[i]
            totsum-=nums[i]
            nums[i]=abs(s//(i+1)-totsum//(len(nums)-i-1))
            if nums[i]<minavg:
                minavg=nums[i]
                ans=i
        s+=nums[-1]
        nums[-1]=s//len(nums)
        if nums[-1]<minavg:
                minavg=nums[-1]
                ans=len(nums)-1
        
        return ans
        
        