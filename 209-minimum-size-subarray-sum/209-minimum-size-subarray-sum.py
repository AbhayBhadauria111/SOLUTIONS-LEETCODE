class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        # ans=inf
        # for i in range(len(nums)):
        #     j=i
        #     s=nums[i]
        #     while(j<len(nums)-1 and s<target):
        #         j+=1
        #         s+=nums[j]
        #     if s>=target:
        #         ans=min(j-i+1,ans)
        # if ans==inf:
        #     ans=0
        # return ans
        i=0
        ans=inf
        s=0
        for j in range(len(nums)):
            s+=nums[j]
            
            while s>=target:
                ans=min(ans,j-i+1)
                s-=nums[i]
                i+=1
                
        if ans==inf:
            return 0
        return ans
            
            
        