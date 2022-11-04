class Solution:
    def countBadPairs(self, nums: List[int]) -> int:
        s={}
        count=0
        n=len(nums)
        for i in range(len(nums)):
            if (nums[i]-i) in s:
                count+=s[nums[i]-i]
            s[nums[i]-i]=s.get(nums[i]-i,0)+1
        return n*(n-1)//2-count
                
                