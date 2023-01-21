class Solution:
    def maximumSubarraySum(self, nums: List[int], k: int) -> int:
        loc={}
        i=j=0
        temp=0
        ans=0
        while(j<len(nums)):
            temp+=nums[j]
            if nums[j] in loc and loc[nums[j]]>=i:
                while(i!=loc[nums[j]]+1):
                    temp-=nums[i]
                    i+=1
            loc[nums[j]]=j
            if j-i==k-1:
                ans=max(ans,temp)
                temp-=nums[i]
                i+=1
            j+=1
        return ans
            
            
            