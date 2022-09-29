class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        c=1
        i=1
        while(i<len(nums)):
            if nums[i-1]==nums[i]:
                c+=1
            else:
                c=1
            if c>2:
                nums.pop(i)
                i-=1
            i+=1
        return len(nums)
        

            
            
        